#pragma once

#define ENCODERS_PAD_A { B12 }
#define ENCODERS_PAD_B { B13 }
#define ENCODER_DIRECTION_FLIP
#define ENCODER_RESOLUTION 4

#ifdef PS2_DRIVER_INTERRUPT
#define PS2_CLOCK_PIN   B2 
#define PS2_DATA_PIN    B6 
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

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE


#define STATE_ON 1
#define STATE_OFF 0

//interne LEDs
#define LAYER_STATE_LED_A B0
#define LAYER_STATE_LED_B D5
// #define LAYER_STATE_LED_B F5