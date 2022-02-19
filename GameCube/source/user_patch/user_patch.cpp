/** @file game_patch.cpp
 * @author AECX
 * @brief Game patches are functions that change game functions.
 *
 * @bug No known bugs
 */

#include "user_patch/user_patch.h"

#include "user_patch/00_wallet.h"
#include "user_patch/01_randombgm.h"
#include "user_patch/02_enemybgm.h"
#include "user_patch/03_customCosmetics.h"
#include "user_patch/04_removeIBLimit.h"
#include "user_patch/05_clearRegionTwilights.h"

namespace mod::user_patch
{
    GamePatch patches[] = { patchWallet,
                            patchRandomBgm,
                            patchBattleMusic,
                            removeIBLimit,
                            clearFaronTwilight,
                            clearEldinTwilight,
                            clearLanayruTwilight };
}