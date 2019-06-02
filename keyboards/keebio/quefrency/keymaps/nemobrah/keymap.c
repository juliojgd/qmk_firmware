#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BASE 0
#define _FN1 1
#define _FN2 2

enum custom_keycodes {
  KC_P00 = SAFE_RANGE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_65(
    KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_NO,   KC_BSPC, KC_DEL,  \
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_HOME, \
    KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,           KC_PGUP, \
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,                   KC_RSFT, KC_UP,   KC_PGDN, \
    KC_LCTL, KC_LGUI, KC_LALT, KC_SPC,  MO(_FN1),         KC_SPC,  KC_NO,   MO(_FN2), KC_RALT, KC_RCTL,                  KC_LEFT, KC_DOWN, KC_RGHT
  ),

  [_FN1] = LAYOUT_65(
    KC_TILD, _______, _______, _______, _______, _______, _______, KC_P7,   KC_P8,   KC_P9,   KC_PSLS, _______, _______, _______, _______, KC_MUTE, \
    RGB_TOG, RGB_MOD, KC_UP,   _______, _______, _______, _______, KC_P4,   KC_P5,   KC_P6,   KC_PAST, _______, _______, _______,          KC_END,  \
    _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, KC_P1,   KC_P2,   KC_P3,   KC_PMNS, _______,          _______,          KC_VOLU, \
    _______, _______, _______, _______, _______, _______, _______, KC_P0,   KC_P00,  KC_PDOT, KC_PPLS,                   _______, _______, KC_VOLD, \
    KC_TILD, _______, _______, _______, _______,          _______, _______, _______, _______, _______,                   _______, _______, _______
  ),
    
  [_FN2] = LAYOUT_65(
    KC_TILD, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,  KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,  _______, _______, KC_PSCREEN, \
    RGB_TOG, RGB_MOD, KC_UP,   _______, _______, _______, _______, ______,  ______,  ______,  _______, _______, _______, _______,          _______,    \
    _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, ______,  ______,  ______,  _______, _______,          _______,          KC_VOLU,    \
    _______, _______, _______, _______, _______, _______, _______, ______,  ______,  ______,  _______,                   _______, _______, KC_VOLD,    \
    KC_TILD, _______, _______, _______, _______,          _______, _______, _______, _______, _______,                   _______, _______, _______
  ) 
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case KC_P00:
      if (record->event.pressed) {
        // when keycode KC_P00 is pressed
        SEND_STRING("00");
      } else {
        // when keycode KC_P00 is released
      }
      break;

  }
  return true;
};
