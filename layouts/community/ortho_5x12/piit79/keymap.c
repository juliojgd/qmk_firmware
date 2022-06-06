/* Copyright 2022 Petr Sedlacek
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "piit79.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] = LAYOUT_piit79_5x12(
    KM_BASE_R1,
    KM_BASE_R2,
    KM_BASE_R3,
    KM_BASE_R4,
    KM_BASE_R5
),
[_LOWER] = LAYOUT_piit79_5x12(
    KM_LOWER
),
[_RAISE] = LAYOUT_piit79_5x12(
    KM_RAISE
),
[_GAME] = LAYOUT_piit79_5x12(
    KM_GAME
),
[_NAV] = LAYOUT_piit79_5x12(
    KM_NAV
),
[_FN1] = LAYOUT_piit79_5x12(
    KM_FN1
),
[_THIRD] = LAYOUT_piit79_5x12(
    KM_THIRD
),
[_ADJ] = LAYOUT_piit79_5x12(
    KM_ADJ
),

};


bool dip_switch_update_user(uint8_t index, bool active) {
    switch (index) {
        case 0:
            if (active) {
                layer_on(_ADJ);
            } else {
                layer_off(_ADJ);
            }
            break;
        case 1:
            if (active) {
                muse_mode = true;
            } else {
                muse_mode = false;
            }
    }
    return true;
}
