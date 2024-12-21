// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {
  _ART_BASE,
  _ART_NUM,
  _ART_CUS,
  _ART_PUNC,
  _ART_MOU,
  _ART_NAV,
  _ART_SYM,
};

#include "aliases.c"
#include "combos.c"

// copied from https://beta.docs.qmk.fm/faqs/faq_debug#which-matrix-position-is-this-keypress
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // If console is enabled, it will print the matrix position and status of each key pressed
#ifdef CONSOLE_ENABLE
    uprintf("KL: kc: 0x%04X, col: %u, row: %u, pressed: %b, time: %u, interrupt: %b, count: %u\n", 
			keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, 
			record->tap.interrupted, record->tap.count);
#endif
  return true;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_ART_BASE] = LAYOUT_ortho_3x4(
		BASE_1_1,BASE_1_2,BASE_1_3,BASE_1_4,
		BASE_2_1,BASE_2_2,BASE_2_3,BASE_2_4
        , KC_AUDIO_MUTE, KC_SPACE, KC_ENTER, KC_NO
		),

[_ART_NUM] = LAYOUT_ortho_3x4(
		NUM_1_1,NUM_1_2,NUM_1_3,NUM_1_4,
		NUM_2_1,NUM_2_2,NUM_2_3,NUM_2_4
        , KC_AUDIO_MUTE, KC_SPACE, KC_ENTER, KC_NO
		),


[_ART_PUNC] = LAYOUT_ortho_3x4(
		PUNC_1_1,PUNC_1_2,PUNC_1_3,PUNC_1_4,
		PUNC_2_1,PUNC_2_2,PUNC_2_3,PUNC_2_4
        , KC_AUDIO_MUTE, KC_SPACE, KC_ENTER, KC_NO
		),

[_ART_CUS] = LAYOUT_ortho_3x4(
		QK_BOOT,CUS_1_2,CUS_1_3,CUS_1_4,
		CUS_2_1,CUS_2_2,CUS_2_3,CUS_2_4
        , KC_AUDIO_MUTE, KC_SPACE, KC_ENTER, KC_NO
		),

[_ART_SYM] = LAYOUT_ortho_3x4(
		SYM_1_1,SYM_1_2,SYM_1_3,SYM_1_4,
		SYM_2_1,SYM_2_2,SYM_2_3,SYM_2_4
        , KC_AUDIO_MUTE, KC_SPACE, KC_ENTER, KC_NO
		),

[_ART_MOU] = LAYOUT_ortho_3x4(
		MOU_1_1,MOU_1_2,MOU_1_3,MOU_1_4,
		MOU_2_1,MOU_2_2,MOU_2_3,MOU_2_4
        , KC_AUDIO_MUTE, KC_SPACE, KC_ENTER, KC_NO
		),

[_ART_NAV] = LAYOUT_ortho_3x4(
		NAV_1_1,NAV_1_2,NAV_1_3,NAV_1_4,
		NAV_2_1,NAV_2_2,NAV_2_3,NAV_2_4
        , KC_AUDIO_MUTE, KC_SPACE, KC_ENTER, KC_NO
		),
};

/*
[_ART_BASE] = LAYOUT_ortho_3x4(
        LT(_ART_SYM,KC_A),KC_R,KC_T,LT(_ART_NUM,KC_S),
        LT(_ART_PUNC,KC_E),KC_Y,KC_I,LT(_ART_CUS,KC_O),
        KC_AUDIO_MUTE, KC_SPACE, KC_ENTER, KC_NO
),

[_ART_NUM] = LAYOUT_ortho_3x4(
        KC_1,KC_2,KC_3,KC_TRNS,
        KC_4,KC_5,KC_6,KC_TRNS,
        KC_AUDIO_MUTE, KC_SPACE, KC_ENTER, KC_NO
),

[_ART_PUNC] = LAYOUT_ortho_3x4(
        KC_EXLM,KC_BSLS,KC_SCLN,KC_GRV,
        KC_TRNS,KC_QUES,KC_MINS,KC_EQL,
        KC_AUDIO_MUTE, KC_SPACE, KC_ENTER, KC_NO
),

[_ART_CUS] = LAYOUT_ortho_3x4(
        KC_MPLY,KC_MUTE,KC_KB_VOLUME_UP,KC_TRNS,
        KC_MPRV,KC_MNXT,KC_KB_VOLUME_DOWN,KC_TRNS,
        KC_AUDIO_MUTE, KC_SPACE, KC_ENTER, KC_NO
),

[_ART_SYM] = LAYOUT_ortho_3x4(
        KC_TRNS,KC_LPRN,KC_RPRN,KC_LCBR,
        KC_TRNS,KC_LBRC,KC_RBRC,KC_RCBR,
        KC_AUDIO_MUTE, KC_SPACE, KC_ENTER, KC_NO
),

[_ART_MOU] = LAYOUT_ortho_3x4(
        KC_BTN1,KC_MS_U,KC_BTN2,KC_WH_U,
        KC_MS_L,KC_MS_D,KC_MS_R,KC_WH_D,
        KC_AUDIO_MUTE, KC_SPACE, KC_ENTER, KC_NO
),

[_ART_NAV] = LAYOUT_ortho_3x4(
        KC_HOME,KC_UP,KC_END,KC_PGUP,
        KC_LEFT,KC_DOWN,KC_RIGHT,KC_PGDN,
        KC_AUDIO_MUTE, KC_SPACE, KC_ENTER, KC_NO
),
};
*/

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_ART_BASE] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_ART_NUM] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_ART_PUNC] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_ART_CUS] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_ART_SYM] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_ART_MOU] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_ART_NAV] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }
};
#endif
