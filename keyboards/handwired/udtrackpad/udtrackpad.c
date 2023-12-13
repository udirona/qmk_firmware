#include "quantum.h"

//https://github.com/qmk/qmk_firmware/blob/master/docs/feature_led_indicators.md
//https://docs.qmk.fm/#/feature_layers?id=layer-change-code

void keyboard_pre_init_user(void) {
    // Call the keyboard pre init code.
    // Set our LED pins as output
    setPinOutput(LAYER_STATE_LED_A);
    setPinOutput(LAYER_STATE_LED_B);
}

void set_layer_led_state(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case 1:
            writePinLow(LAYER_STATE_LED_A);
            writePinHigh(LAYER_STATE_LED_B);
            break;
        case 2: 
            writePinHigh(LAYER_STATE_LED_A);
            writePinLow(LAYER_STATE_LED_B);
            break;
        case 3: 
            writePinLow(LAYER_STATE_LED_A);
            writePinLow(LAYER_STATE_LED_B);
            break;
        default: //  for any other layers, or the default layer
            writePinHigh(LAYER_STATE_LED_A);
            writePinHigh(LAYER_STATE_LED_B);
        break;
        }
}

layer_state_t layer_state_set_kb(layer_state_t state) {
    set_layer_led_state(state);
    return layer_state_set_user(state);
}