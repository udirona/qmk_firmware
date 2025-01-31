// Copyright 2022 Stefan Kerkmann
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

//#define DEBUG_MATRIX_SCAN_RATE

//#define QMK_WAITING_TEST_BUSY_PIN GP8
//#define QMK_WAITING_TEST_YIELD_PIN GP9

//https://github.com/qmk/qmk_firmware/blob/master/docs/platformdev_rp2040.md
// Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
// Specify a optional status led by GPIO number which blinks when entering the bootloader
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP16
// Timeout window in ms in which the double tap can occur.
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

//#define BACKLIGHT_PWM_CHANNEL RP2040_PWM_CHANNEL_B
//#define AUDIO_PIN GP16
//#define AUDIO_PWM_DRIVER PWMD0
//#define AUDIO_PWM_CHANNEL RP2040_PWM_CHANNEL_A

//#define ADC_PIN GP26
