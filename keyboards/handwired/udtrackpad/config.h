#pragma once

//interne LEDs
#define LAYER_STATE_LED_A B0
#define LAYER_STATE_LED_B D5

#define ENCODERS_PAD_A { B1 }
#define ENCODERS_PAD_B { B3 }
// #define ENCODER_DIRECTION_FLIP
#define ENCODER_RESOLUTION 4

#ifdef PS2_DRIVER_INTERRUPT
#define PS2_CLOCK_PIN   D2
#define PS2_DATA_PIN    F4
    #define PS2_INT_INIT()  do {    \
        EICRA |= ((1<<ISC21) |      \
                (0<<ISC20));      \
    } while (0)
    #define PS2_INT_ON()  do {      \
        EIMSK |= (1<<INT2);         \
    } while (0)
    #define PS2_INT_OFF() do {      \
        EIMSK &= ~(1<<INT2);        \
    } while (0)
    #define PS2_INT_VECT   INT2_vect
#endif

// #define PS2_MOUSE_ROTATE 90
// #define PS2_MOUSE_X_MULTIPLIER 3
// #define PS2_MOUSE_Y_MULTIPLIER 3
// #define PS2_MOUSE_V_MULTIPLIER 1
/* The time to wait after initializing the ps2 host */
// #define PS2_MOUSE_INIT_DELAY 3000 /* Default */




/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
