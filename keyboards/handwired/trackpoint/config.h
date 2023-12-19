#pragma once


#ifdef PS2_DRIVER_INTERRUPT
#define PS2_CLOCK_PIN   D2 
#define PS2_DATA_PIN    D1
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

#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE
#define PS2_MOUSE_ROTATE 90

#define PS2_MOUSE_X_MULTIPLIER 3
#define PS2_MOUSE_Y_MULTIPLIER 3
#define PS2_MOUSE_V_MULTIPLIER 1
/* The time to wait after initializing the ps2 host */
#define PS2_MOUSE_INIT_DELAY 3000 /* Default */