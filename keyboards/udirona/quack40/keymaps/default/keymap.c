/* Copyright 2021 kb-elmo<mail@elmo.space>
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

enum layers {
    BASE,
    LOWER,
    RAISE,
    SYS
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_long_space(
        KC_Q,             KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
//        KC_A,             KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_ENT,
        LCTL_T(KC_A),     LALT_T(KC_S), LGUI_T(KC_D), LSFT_T(KC_F), KC_G,  KC_H,  RSFT_T(KC_J), RGUI_T(KC_K), LALT_T(KC_L), RCTL_T(KC_ENT),
        LT(LOWER,KC_Z),   KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, LT(RAISE,KC_DOT),
        KC_LCTL, KC_LGUI, KC_LALT,           LSFT_T(KC_SPC),           KC_RALT, MO(SYS),   KC_RCTL
    ),

    [LOWER] = LAYOUT_long_space(
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
        KC_TAB,  KC_HOME, KC_PGUP, KC_PGDN, KC_END,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_BSLS,
        KC_ESC,  KC_MINS, KC_EQL,  KC_LBRC, KC_LBRC, KC_BSLS, KC_SCLN, KC_QUOT, KC_SLSH,
        KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS,              KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [RAISE] = LAYOUT_long_space(
        KC_F1,    KC_F2,       KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,
        KC_GRAVE, S(KC_GRAVE), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DEL,
        KC_TRNS, S(KC_MINS), S(KC_EQL),  S(KC_LBRC), S(KC_LBRC), S(KC_BSLS), S(KC_SCLN), S(KC_QUOT), S(KC_SLSH),
        KC_TRNS, KC_TRNS, KC_TRNS,        KC_ESC,             KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [SYS] = LAYOUT_long_space(
        QK_BOOT, C(A(KC_F1)), C(A(KC_F2)), C(A(KC_F3)), KC_TRNS, KC_TRNS, KC_F9, KC_F10, C(KC_F9), C(KC_F12),
        KC_TRNS, C(KC_F1), C(KC_F2), C(KC_F3), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, C(G(KC_LEFT)), C(G(KC_RGHT)), KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS,             KC_TRNS, KC_TRNS, KC_TRNS
    )
};

