/**	@file seed.cpp
 *  @brief Seed class to access seed-data
 *
 *	@author AECX
 *	@bug No known bugs.
 */

#include "rando/seed.h"

#include <cstdint>
#include <cstring>

#include "rando/seed.h"
#include "data/stages.h"
#include "gc_wii/card.h"
#include "main.h"
#include "rando/data.h"
#include "tp/d_com_inf_game.h"
#include "tp/d_item.h"
#include "user_patch/user_patch.h"
#include "tp/d_item_data.h"
#include "tp/d_a_shop_item_static.h"
#include "game_patch/game_patch.h"
#include "rando/customItems.h"
#include "cxx.h"

namespace mod::rando
{
    bool Seed::InitSeed( void )
    {
        // (Re)set counters & status
        m_AreaFlagsModified = 0;
        m_EventFlagsModified = 0;
        m_PatchesApplied = 0;

        if ( checkIfSeedLoaded() )
        {
            // getConsole() << "Setting Event Flags... \n";
            this->applyEventFlags();

            // getConsole() << "Setting Region Flags... \n";
            this->applyRegionFlags();

            this->giveStartingItems();
            getConsole() << "Seed Applied Successfully.\n";
            return true;
        }
        else
        {
            getConsole() << "FATAL: Couldn't read Seed #" << m_fileIndex << "\n";
            getConsole() << "ERROR: " << m_CARDResult << "\n";
            return false;
        }
    }

    void Seed::applyEventFlags()
    {
        using namespace libtp;

        Header* headerPtr = m_Header;
        const uint32_t num_eventFlags = headerPtr->eventFlagsInfo.numEntries;
        const uint32_t gci_offset = headerPtr->eventFlagsInfo.dataOffset;

        if ( num_eventFlags > 0 )
        {
            tp::d_com_inf_game::dComIfG_inf_c* gameInfo = &tp::d_com_inf_game::dComIfG_gameInfo;

            // Set the pointer as offset into our buffer
            eventFlag* eventFlags = reinterpret_cast<eventFlag*>( &m_GCIData[gci_offset] );

            uint32_t eventFlagsModified = m_EventFlagsModified;
            for ( uint32_t i = 0; i < num_eventFlags; i++ )
            {
                const uint32_t offset = eventFlags[i].offset;
                const uint8_t flag = eventFlags[i].flag;

                gameInfo->save.save_file.event_flags.event_flags[offset] |= flag;
                eventFlagsModified++;
            }

            m_EventFlagsModified = eventFlagsModified;
        }
    }

    void Seed::applyRegionFlags()
    {
        using namespace libtp;

        Header* headerPtr = m_Header;
        const uint32_t num_regionFlags = headerPtr->regionFlagsInfo.numEntries;
        const uint32_t gci_offset = headerPtr->regionFlagsInfo.dataOffset;

        if ( num_regionFlags > 0 )
        {
            tp::d_save::dSv_info_c* SaveInfo = &tp::d_com_inf_game::dComIfG_gameInfo.save;
            // tp::d_com_inf_game::dComIfG_inf_c* gameInfo = &tp::d_com_inf_game::dComIfG_gameInfo;

            // Set the pointer as offset into our buffer
            regionFlag* regionFlags = reinterpret_cast<regionFlag*>( &m_GCIData[gci_offset] );

            uint8_t regionID = data::stage::regions[0];
            uint32_t areaFlagsModified = m_AreaFlagsModified;
            uint8_t* memoryFlagsPtr = &SaveInfo->memory.temp_flags.memoryFlags[0];

            // Loop through all regions
            for ( uint32_t i = 0; i < sizeof( data::stage::regions ); i++ )
            {
                regionID = data::stage::regions[i];
                tp::d_save::getSave( SaveInfo, static_cast<int32_t>( regionID ) );

                // Loop through region-flags from GCI
                for ( uint32_t j = 0; j < num_regionFlags; j++ )
                {
                    regionFlag* currentRegion = &regionFlags[j];
                    if ( currentRegion->region_id == regionID )
                    {
                        // The n'th bit that we want to set TRUE
                        const int32_t bit = currentRegion->bit_id;

                        const int32_t offset = bit / 8;
                        const int32_t shift = bit % 8;

                        // Failsafe; localAreaNode size is 0x20
                        if ( offset < 0x20 )
                        {
                            memoryFlagsPtr[offset] |= ( 0x80 >> shift );
                            areaFlagsModified++;
                        }
                    }
                }

                // Save the modifications
                tp::d_save::putSave( SaveInfo, regionID );
            }

            m_AreaFlagsModified = areaFlagsModified;
            tp::d_save::getSave( SaveInfo, data::stage::regions[2] );
        }
    }

    void Seed::giveStartingItems()
    {
        using namespace libtp;

        Header* headerPtr = m_Header;
        const uint32_t num_startingItems = headerPtr->startingItemInfo.numEntries;
        const uint32_t gci_offset = headerPtr->startingItemInfo.dataOffset;

        if ( num_startingItems > 0 )
        {
            // Set the pointer as offset into our buffer
            uint8_t* startingItems = reinterpret_cast<uint8_t*>( &m_GCIData[gci_offset] );

            for ( uint32_t i = 0; i < num_startingItems; i++ )
            {
                libtp::tp::d_item::execItemGet( startingItems[i] );
            }
        }
    }

    bool Seed::LoadChecks( const char* stage )
    {
        using namespace libtp;

        // Find the index of this stage
        uint8_t stageIDX;
        const auto stagesPtr = &data::stage::allStages[0];
        constexpr uint32_t stageCount = sizeof( data::stage::allStages ) / sizeof( data::stage::allStages[0] );

        for ( stageIDX = 0; stageIDX < stageCount; stageIDX++ )
        {
            if ( !strcmp( stage, stagesPtr[stageIDX] ) )
            {
                break;
            }
        }

        // Don't run if this isn't actually a new stage
        const bool result = stageIDX != m_StageIDX;
        if ( result )
        {
            this->ClearChecks();

            this->LoadDZX( stageIDX );
            this->LoadREL( stageIDX );
            this->LoadPOE( stageIDX );
            this->LoadBOSS( stageIDX );
            this->LoadBugReward();
            this->LoadSkyCharacter( stageIDX );
            this->LoadHiddenSkill();

            // Save current stageIDX for next time
            m_StageIDX = stageIDX;
        }

        return result;
    }

    void Seed::ClearChecks()
    {
        m_numLoadedDZXChecks = 0;
        m_numLoadedRELChecks = 0;
        m_numLoadedPOEChecks = 0;
        m_numLoadedBossChecks = 0;
        m_numBugRewardChecks = 0;
        m_numSkyBookChecks = 0;
        m_numHiddenSkillChecks = 0;

        delete[] m_DZXChecks;
        delete[] m_RELChecks;
        delete[] m_POEChecks;
        delete[] m_BossChecks;
        delete[] m_BugRewardChecks;
        delete[] m_SkyBookChecks;
        delete[] m_HiddenSkillChecks;
    }

    void Seed::LoadDZX( uint8_t stageIDX )
    {
        using namespace libtp;

        Header* headerPtr = m_Header;
        const uint32_t num_dzxchecks = headerPtr->dzxCheckInfo.numEntries;
        const uint32_t gci_offset = headerPtr->dzxCheckInfo.dataOffset;

        // Set the pointer as offset into our buffer
        dzxCheck* allDZX = reinterpret_cast<dzxCheck*>( &m_GCIData[gci_offset] );

        uint32_t numLoadedDZXChecks = m_numLoadedDZXChecks;
        for ( uint32_t i = 0; i < num_dzxchecks; i++ )
        {
            if ( allDZX[i].stageIDX == stageIDX )
            {
                numLoadedDZXChecks++;
            }
        }
        m_numLoadedDZXChecks = numLoadedDZXChecks;

        // Allocate memory the actual DZXChecks
        // We do NOT have to clear the previous buffer as that's already done in "LoadChecks()"
        dzxCheck* dzxChecksPtr = new dzxCheck[numLoadedDZXChecks];
        m_DZXChecks = dzxChecksPtr;

        // offset into m_DZXChecks
        uint32_t j = 0;

        for ( uint32_t i = 0; i < num_dzxchecks; i++ )
        {
            dzxCheck* currentCheck = &allDZX[i];
            dzxCheck* globalCheck = &dzxChecksPtr[j];

            if ( currentCheck->stageIDX == stageIDX )
            {
                // Store the i'th DZX check into the j'th Loaded DZX check that's relevant to our current stage
                memcpy( globalCheck, currentCheck, sizeof( dzxCheck ) );
                j++;
            }
        }
    }

    void Seed::LoadREL( uint8_t stageIDX )
    {
        using namespace libtp;

        Header* headerPtr = m_Header;
        const uint32_t num_relchecks = headerPtr->relCheckInfo.numEntries;
        const uint32_t gci_offset = headerPtr->relCheckInfo.dataOffset;

        // Set the pointer as offset into our buffer
        RELCheck* allREL = reinterpret_cast<RELCheck*>( &m_GCIData[gci_offset] );

        uint32_t numLoadedRELChecks = m_numLoadedRELChecks;
        for ( uint32_t i = 0; i < num_relchecks; i++ )
        {
            uint32_t currentStageIdx = allREL[i].stageIDX;

            if ( ( currentStageIdx == stageIDX ) ||
                 ( currentStageIdx == 0xFF ) )     // Check if we are on the current stage, or if the rel override needs to
                                                   // be applied to every stage
            {
                numLoadedRELChecks++;
            }
        }
        m_numLoadedRELChecks = numLoadedRELChecks;

        // Allocate memory to the actual RELChecks
        // Do NOT need to clear the previous buffer as that's taken care of by LoadChecks()
        RELCheck* relChecksPtr = new RELCheck[numLoadedRELChecks];
        m_RELChecks = relChecksPtr;

        // offset into m_RELChecks
        uint32_t j = 0;

        for ( uint32_t i = 0; i < num_relchecks; i++ )
        {
            RELCheck* currentRel = &allREL[i];
            RELCheck* globalRel = &relChecksPtr[j];
            uint32_t currentStageIdx = currentRel->stageIDX;

            if ( ( currentStageIdx == stageIDX ) ||
                 ( currentStageIdx == 0xFF ) )     // Check if we are on the current stage, or if the rel override needs to
                                                   // be applied to every stage
            {
                // Store the i'th DZX check into the j'th Loaded DZX check that's relevant to our current stage
                memcpy( globalRel, currentRel, sizeof( RELCheck ) );
                j++;
            }
        }
    }

    void Seed::LoadPOE( uint8_t stageIDX )
    {
        using namespace libtp;

        Header* headerPtr = m_Header;
        const uint32_t num_poechecks = headerPtr->poeCheckInfo.numEntries;
        const uint32_t gci_offset = headerPtr->poeCheckInfo.dataOffset;

        // Set the pointer as offset into our buffer
        POECheck* allPOE = reinterpret_cast<POECheck*>( &m_GCIData[gci_offset] );

        uint32_t numLoadedPOEChecks = m_numLoadedPOEChecks;
        for ( uint32_t i = 0; i < num_poechecks; i++ )
        {
            if ( allPOE[i].stageIDX == stageIDX )
            {
                numLoadedPOEChecks++;
            }
        }
        m_numLoadedPOEChecks = numLoadedPOEChecks;

        // Allocate memory to the actual POEChecks
        // Do NOT need to clear the previous buffer as that's taken care of by LoadChecks()
        POECheck* poeChecksPtr = new POECheck[numLoadedPOEChecks];
        m_POEChecks = poeChecksPtr;

        // offset into m_POEChecks
        uint32_t j = 0;

        for ( uint32_t i = 0; i < num_poechecks; i++ )
        {
            POECheck* currentPoeCheck = &allPOE[i];
            POECheck* globalPoeCheck = &poeChecksPtr[j];

            if ( currentPoeCheck->stageIDX == stageIDX )
            {
                // Store the i'th POE check into the j'th Loaded POEcheck that's relevant to our current stage
                memcpy( globalPoeCheck, currentPoeCheck, sizeof( POECheck ) );
                j++;
            }
        }
    }

    void Seed::LoadHiddenSkill()
    {
        using namespace libtp;

        Header* headerPtr = m_Header;
        const uint32_t num_hiddenSkills = headerPtr->hiddenSkillCheckInfo.numEntries;
        const uint32_t gci_offset = headerPtr->hiddenSkillCheckInfo.dataOffset;

        // Set the pointer as offset into our buffer
        HiddenSkillCheck* hiddenSkillChecksPtr = new HiddenSkillCheck[num_hiddenSkills];
        m_HiddenSkillChecks = hiddenSkillChecksPtr;
        HiddenSkillCheck* allSKILL = reinterpret_cast<HiddenSkillCheck*>( &m_GCIData[gci_offset] );

        // Offset into m_HiddenSkillChecks
        uint32_t j = 0;

        uint32_t numHiddenSkillChecks = m_numHiddenSkillChecks;
        for ( uint32_t i = 0; i < num_hiddenSkills; i++ )
        {
            HiddenSkillCheck* currentSkillCheck = &allSKILL[i];
            HiddenSkillCheck* globalSkillCheck = &hiddenSkillChecksPtr[j];

            // Store the i'th DZX check into the j'th Loaded DZX check that's relevant to our current stage
            memcpy( globalSkillCheck, currentSkillCheck, sizeof( HiddenSkillCheck ) );
            j++;
            numHiddenSkillChecks++;
        }
        m_numHiddenSkillChecks = numHiddenSkillChecks;
    }

    void Seed::LoadBugReward()
    {
        using namespace libtp;

        Header* headerPtr = m_Header;
        const uint32_t num_bugRewards = headerPtr->bugRewardCheckInfo.numEntries;
        const uint32_t gci_offset = headerPtr->bugRewardCheckInfo.dataOffset;

        // Set the pointer as offset into our buffer
        BugReward* allBUG = reinterpret_cast<BugReward*>( &m_GCIData[gci_offset] );

        uint32_t numBugRewardChecks = m_numBugRewardChecks;
        for ( uint32_t i = 0; i < num_bugRewards; i++ )
        {
            numBugRewardChecks++;
        }
        m_numBugRewardChecks = numBugRewardChecks;

        // Allocate memory to the actual POEChecks
        // Do NOT need to clear the previous buffer as that's taken care of by LoadChecks()
        BugReward* bugRewardChecksPtr = new BugReward[numBugRewardChecks];
        m_BugRewardChecks = bugRewardChecksPtr;

        // offset into m_BugRewardChecks
        uint32_t j = 0;

        for ( uint32_t i = 0; i < num_bugRewards; i++ )
        {
            BugReward* currentBugCheck = &allBUG[i];
            BugReward* globalBugCheck = &bugRewardChecksPtr[j];

            memcpy( globalBugCheck, currentBugCheck, sizeof( BugReward ) );
            j++;
        }
    }

    void Seed::LoadSkyCharacter( uint8_t stageIDX )
    {
        Header* headerPtr = m_Header;
        const uint32_t num_skycharacters = headerPtr->skyCharacterCheckInfo.numEntries;
        const uint32_t gci_offset = headerPtr->skyCharacterCheckInfo.dataOffset;

        SkyCharacter* skyBookChecksPtr = new SkyCharacter[num_skycharacters];
        m_SkyBookChecks = skyBookChecksPtr;
        SkyCharacter* allCHAR = reinterpret_cast<SkyCharacter*>( &m_GCIData[gci_offset] );

        // offset into m_SkyBookChecks
        uint32_t j = 0;

        for ( uint32_t i = 0; i < num_skycharacters; i++ )
        {
            SkyCharacter* currentCharCheck = &allCHAR[i];
            SkyCharacter* globalCharCheck = &skyBookChecksPtr[j];

            uint32_t numSkyBookChecks = m_numSkyBookChecks;
            if ( ( currentCharCheck->stageIDX == stageIDX ) )
            {
                memcpy( globalCharCheck, currentCharCheck, sizeof( SkyCharacter ) );
                numSkyBookChecks++;
                j++;
            }
            m_numSkyBookChecks = numSkyBookChecks;
        }
    }

    void Seed::LoadBOSS( uint8_t stageIDX )
    {
        using namespace libtp;

        Header* headerPtr = m_Header;
        const uint32_t num_bossChecks = headerPtr->bossCheckInfo.numEntries;
        const uint32_t gci_offset = headerPtr->bossCheckInfo.dataOffset;

        // Set the pointer as offset into our buffer
        BOSSCheck* bossChecksPtr = new BOSSCheck[1];
        m_BossChecks = bossChecksPtr;
        BOSSCheck* allBOSS = reinterpret_cast<BOSSCheck*>( &m_GCIData[gci_offset] );

        // There is only one BOSS check per stage. Once we have a match, we are done.
        for ( uint32_t i = 0; i < num_bossChecks; i++ )
        {
            BOSSCheck* currentBossCheck = &allBOSS[i];

            if ( currentBossCheck->stageIDX == stageIDX )
            {
                memcpy( bossChecksPtr, currentBossCheck, sizeof( BOSSCheck ) );
                break;
            }
        }
    }

    void Seed::LoadARCChecks( uint8_t stageIDX, FileDirectory fileDirectory, int32_t roomNo )
    {
        using namespace libtp;

        // Until a better way is found, we are going to clear the buffer here just to be safe
        delete[] m_ArcReplacements;

        Header* headerPtr = m_Header;
        const uint32_t num_arcchecks = headerPtr->arcCheckInfo.numEntries;
        const uint32_t gci_offset = headerPtr->arcCheckInfo.dataOffset;

        // Set the pointer as offset into our buffer
        ARCReplacement* allARC = reinterpret_cast<ARCReplacement*>( &m_GCIData[gci_offset] );

        uint32_t numLoadedArcReplacements = 0;
        for ( uint32_t i = 0; i < num_arcchecks; i++ )
        {
            ARCReplacement* currentArcCheck = &allARC[i];

            if ( ( currentArcCheck->stageIDX == stageIDX ) && ( currentArcCheck->directory == fileDirectory ) )
            {
                numLoadedArcReplacements++;
            }
        }
        m_numLoadedArcReplacements = numLoadedArcReplacements;

        // Allocate memory to the actual ARCChecks
        ARCReplacement* arcReplacementsPtr = new ARCReplacement[numLoadedArcReplacements];
        m_ArcReplacements = arcReplacementsPtr;

        // offset into m_ArcReplacements
        uint32_t j = 0;

        for ( uint32_t i = 0; i < num_arcchecks; i++ )
        {
            ARCReplacement* currentArcCheck = &allARC[i];
            ARCReplacement* globalArcCheck = &arcReplacementsPtr[j];

            switch ( fileDirectory )
            {
                case rando::FileDirectory::Room:
                {
                    if ( ( currentArcCheck->stageIDX == stageIDX ) && ( currentArcCheck->directory == fileDirectory ) &&
                         ( currentArcCheck->roomID == roomNo ) )
                    {
                        memcpy( globalArcCheck, currentArcCheck, sizeof( ARCReplacement ) );
                        j++;
                    }
                    break;
                }

                default:
                {
                    if ( ( currentArcCheck->stageIDX == stageIDX ) && ( currentArcCheck->directory == fileDirectory ) )
                    {
                        memcpy( globalArcCheck, currentArcCheck, sizeof( ARCReplacement ) );
                        j++;
                    }
                    break;
                }
            }
        }
    }

    void Seed::LoadObjectARCChecks()
    {
        using namespace libtp;

        // Until a better way is found, we are going to clear the buffer here just to be safe
        delete[] m_ObjectArcReplacements;

        Header* headerPtr = m_Header;
        const uint32_t num_objarcchecks = headerPtr->objectArcCheckInfo.numEntries;
        const uint32_t gci_offset = headerPtr->objectArcCheckInfo.dataOffset;

        // Set the pointer as offset into our buffer
        ObjectArchiveReplacement* allARC = reinterpret_cast<ObjectArchiveReplacement*>( &m_GCIData[gci_offset] );

        uint32_t numLoadedObjectArcReplacements = 0;
        for ( uint32_t i = 0; i < num_objarcchecks; i++ )
        {
            if ( ( allARC[i].stageIDX == m_StageIDX ) )
            {
                numLoadedObjectArcReplacements++;
            }
        }
        m_numLoadedObjectArcReplacements = numLoadedObjectArcReplacements;

        // Allocate memory to the actual ARCChecks
        ObjectArchiveReplacement* objectArcReplacementsPtr = new ObjectArchiveReplacement[numLoadedObjectArcReplacements];
        m_ObjectArcReplacements = objectArcReplacementsPtr;

        // offset into m_ArcReplacements
        uint32_t j = 0;

        for ( uint32_t i = 0; i < num_objarcchecks; i++ )
        {
            ObjectArchiveReplacement* currentObjectArcReplacement = &allARC[i];
            ObjectArchiveReplacement* globalObjectArcReplacement = &objectArcReplacementsPtr[j];

            if ( ( currentObjectArcReplacement->stageIDX == m_StageIDX ) )
            {
                memcpy( globalObjectArcReplacement, currentObjectArcReplacement, sizeof( ObjectArchiveReplacement ) );
                j++;
            }
        }
    }

    void Seed::applyVolatilePatches( bool set )
    {
        using namespace libtp;

        if ( !checkIfSeedLoaded() )
        {
            return;
        }

        Header* headerPtr = m_Header;
        const uint32_t num_bytes = headerPtr->volatilePatchInfo.numEntries;
        const uint32_t gci_offset = headerPtr->volatilePatchInfo.dataOffset;

        // Don't bother to patch anything if there's nothing to patch
        if ( num_bytes > 0 )
        {
            // Set the pointer as offset into our buffer
            uint8_t* patch_config = &m_GCIData[gci_offset];

            for ( uint32_t i = 0; i < num_bytes; i++ )
            {
                const uint32_t byte = patch_config[i];

                for ( uint32_t b = 0; b < 8; b++ )
                {
                    if ( ( byte << b ) & 0x80 )
                    {
                        // Run the patch function for this bit index
                        const uint32_t index = i * 8 + b;

                        if ( index < sizeof( user_patch::volatilePatches ) / sizeof( user_patch::volatilePatches[0] ) )
                        {
                            user_patch::volatilePatches[index]( randomizer, set );
                            m_PatchesApplied++;
                        }
                    }
                }
            }
        }
    }

    void Seed::loadShopModels()
    {
        using namespace libtp::tp;
        using namespace libtp::data;
        using namespace libtp::tp::d_a_shop_item_static;

        entryInfo* shopItemCheckInfo = &m_Header->shopItemCheckInfo;
        const uint32_t num_shopItems = shopItemCheckInfo->numEntries;
        const uint32_t gci_offset = shopItemCheckInfo->dataOffset;

        // Set the pointer as offset into our buffer
        shopCheck* allSHOP = reinterpret_cast<shopCheck*>( &m_GCIData[gci_offset] );

        d_item_data::ItemResource* itemResourcePtr = &d_item_data::item_resource[0];

        uint8_t foolishModelIndexes[MAX_SPAWNED_FOOLISH_ITEMS];
        uint32_t foolishModelCounter = 0;

        for ( uint32_t i = 0; i < num_shopItems; i++ )
        {
            shopCheck* currentShopCheck = &allSHOP[i];

            const uint32_t replacementItem =
                game_patch::_04_verifyProgressiveItem( randomizer, currentShopCheck->replacementItemID );

            const uint32_t shopItem = currentShopCheck->shopItemID;

            ShopItemData* currentShopItemDataPtr = &shopItemData[shopItem];

            switch ( replacementItem )
            {
                // Only the first foolish item should need to be checked, but check all to be safe
                case rando::customItems::Foolish_Item_1:
                case rando::customItems::Foolish_Item_2:
                case rando::customItems::Foolish_Item_3:
                case rando::customItems::Foolish_Item_4:
                case rando::customItems::Foolish_Item_5:
                case rando::customItems::Foolish_Item_6:
                {
                    game_patch::_02_modifyFoolishShopModel( foolishModelIndexes, foolishModelCounter, shopItem );
                    foolishModelCounter++;

                    // If the end of the array is reached, then reset the counter, as there should only ever be a certain amount
                    // of ice traps in any given shop
                    if ( foolishModelCounter >= sizeof( foolishModelIndexes ) )
                    {
                        foolishModelCounter = 0;
                    }
                    break;
                }
                default:
                {
                    d_item_data::ItemResource* currentItemResourcePtr = &itemResourcePtr[replacementItem];

                    currentShopItemDataPtr->arcName = currentItemResourcePtr->arcName;
                    currentShopItemDataPtr->modelResIdx = currentItemResourcePtr->modelResIdx;
                    currentShopItemDataPtr->wBtkResIdx = currentItemResourcePtr->btkResIdx;
                    currentShopItemDataPtr->wBckResIdx = currentItemResourcePtr->bckResIdx;
                    currentShopItemDataPtr->wBrkResIdx = currentItemResourcePtr->brkResIdx;
                    currentShopItemDataPtr->wBtpResIdx = currentItemResourcePtr->btpResIdx;
                    currentShopItemDataPtr->tevFrm = currentItemResourcePtr->tevFrm;

                    break;
                }
            }

            if ( shopItem == 0x13 )     // Magic Armor
            {
                switch ( replacementItem )
                {
                    case items::Green_Rupee:
                    case items::Blue_Rupee:
                    case items::Yellow_Rupee:
                    case items::Red_Rupee:
                    case items::Purple_Rupee:
                    case items::Orange_Rupee:
                    case items::Silver_Rupee:
                    case items::Purple_Rupee_Links_House:
                    {
                        currentShopItemDataPtr->posY = 65.f;
                        break;
                    }
                    default:
                    {
                        currentShopItemDataPtr->posY = 60.f;
                        break;
                    }
                }
            }
            else
            {
                currentShopItemDataPtr->posY = 15.f;
            }

            currentShopItemDataPtr->btpFrm = 0xFF;
            currentShopItemDataPtr->mFlags = 0xFFFFFFFF;

            game_patch::_02_modifyShopModelScale( shopItem, replacementItem );

            // Clear the cache for the modified values
            libtp::gc_wii::os_cache::DCFlushRange( reinterpret_cast<void*>( currentShopItemDataPtr ),
                                                   sizeof( libtp::tp::d_a_shop_item_static::ShopItemData ) );
        }
    }

}     // namespace mod::rando