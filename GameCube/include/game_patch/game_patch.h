/** @file game_patch.h
 * @author AECX
 * @author Lunar Soap
 * @brief Game patches are always applied & mostly used to fix a bug/softlog.
 *
 * @bug No known bugs
 */
#ifndef RANDO_GAME_PATCH_H
#define RANDO_GAME_PATCH_H

#include <cstdint>

namespace mod::game_patch
{
    void _00_poe( void );
    int32_t _01_getLayerNo(const char *stageName, int32_t roomId, int32_t layerOverride);
    void _02_modifyItemData();
    void _03_increaseClimbSpeed();
}     // namespace mod::game_patch
#endif