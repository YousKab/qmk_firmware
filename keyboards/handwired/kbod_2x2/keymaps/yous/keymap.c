// #include QMK_KEYBOARD_H
// #include "yous.h"

// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//   [0] = LAYOUT( /* Keypad layer */
//        RGB_TOG,  KC_2, KC_3, KC_4, KC_5, KC_6
//   )
// };

#include "kbod_2x2.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  KEYMAP( /* Keypad layer */
       RGB_TOG,  KC_2, KC_3, KC_4, KC_5, KC_6
  )
};