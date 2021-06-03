#include QMK_KEYBOARD_H

#define ____ KC_TRNS


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_4x4(
        KC_A,   KC_B,   KC_C,  KC_D,
        KC_E,   KC_F,   KC_G,  KC_H,
        KC_I,   KC_J,   KC_K,  KC_L,
        RGB_TOG,   RGB_MOD,   KC_ENTER,  KC_P
    ),
    [1] = LAYOUT_ortho_4x4(
        ____,   ____,   ____,  ____,
        ____,   ____,   ____,  ____,
        ____,   ____,   ____,  ____,
        ____,   ____,   ____,  ____
    ),
    [2] = LAYOUT_ortho_4x4(
        ____,   ____,   ____,  ____,
        ____,   ____,   ____,  ____,
        ____,   ____,   ____,  ____,
        ____,   ____,   ____,  ____
    ),
    [3] = LAYOUT_ortho_4x4(
        ____,   ____,   ____,  ____,
        ____,   ____,   ____,  ____,
        ____,   ____,   ____,  ____,
        ____,   ____,   ____,  ____
    )
};

