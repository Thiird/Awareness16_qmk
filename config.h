#pragma once
#include "config_common.h"

// USB Device descriptor parameters
#define VENDOR_ID       0x9905
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0000
#define MANUFACTURER    Thiird
#define PRODUCT         Awareness16
#define DESCRIPTION     4x4 Macropad, underglow, RGB matrix, buzzer

// Switch matrix
#define MATRIX_ROWS 4
#define MATRIX_COLS 4
#define MATRIX_ROW_PINS { D3, D6, B4, D7 }
#define MATRIX_COL_PINS { D2, B5, B6, C7 }
#define UNUSED_PINS {  }
#define DIODE_DIRECTION COL2ROW

// Force NKRO from the start
#define FORCE_NKRO

// Audio buzzer, single Mallory AST1109MLTRQ
/*#define AUDIO_PIN C6
#define AUDIO_CLICKY*/

// Turn RGB off when pc is off/suspended (doesn't always work)
#define RGBLIGHT_SLEEP

// RGB underglow, generic 6028 msd common anode leds
/*
#define RGB_DI_PIN B3
#define RGBLED_NUM 3
#define RGBLIGHT_ANIMATIONS
*/

// RGB matrix led driver, single ISSIFL3733, SK6812 mini-e leds
#define DRIVER_ADDR_1 0b1010000
#define DRIVER_ADDR_2 0b1010000 // this is here for compliancy reasons.

#define DRIVER_COUNT 2
#define DRIVER_1_LED_TOTAL 16
#define DRIVER_LED_TOTAL DRIVER_1_LED_TOTAL
