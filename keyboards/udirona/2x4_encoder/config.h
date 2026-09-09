#pragma once

//interne LEDs
#define LAYER_STATE_LED_A B0
#define LAYER_STATE_LED_B D5

#define ENCODERS_PAD_A { B1 }
#define ENCODERS_PAD_B { B3 }
// #define ENCODER_DIRECTION_FLIP
#define ENCODER_RESOLUTION 4

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
