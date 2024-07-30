/* Copyright 2021 Matthias Liffers
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

enum layers { NORMAL_LAYER, SECOND_LAYER, THIRD_LAYER, FOURTH_LAYER };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [NORMAL_LAYER] = LAYOUT_ortho_2x5(
        KC_F13, KC_F14, KC_F15, KC_F16, KC_F17,
        KC_F18, KC_F19, KC_F20, KC_F21, KC_F22
    ),
    [SECOND_LAYER] = LAYOUT_ortho_2x5(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [THIRD_LAYER] = LAYOUT_ortho_2x5(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [FOURTH_LAYER] = LAYOUT_ortho_2x5(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [NORMAL_LAYER] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [SECOND_LAYER] = { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN) },
    [THIRD_LAYER]  = { ENCODER_CCW_CW(KC_RIGHT, KC_LEFT) },
    [FOURTH_LAYER] = { ENCODER_CCW_CW(KC_RIGHT, KC_LEFT) },
};
#endif
