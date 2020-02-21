#include "piit79.h"
 
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT(
        KC_GESC,           KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  XXXXXXX, KC_BSPC,
        THRD_TAB,          KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        LCTL_ESC,          KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
        KC_LSFT,  XXXXXXX, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          FN2,
        FN1_WAKE,          KC_LGUI, KC_LALT, XXXXXXX,          NAV_SPC,          XXXXXXX, KC_RALT, KC_APP,  XXXXXXX, FN1,              KC_RCTL
    ),

    [_NAV] = LAYOUT(
        KC_GRV,            KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  XXXXXXX, KC_DEL,
        _______,           _______, _______, _______, _______, _______, _______, KC_PGDN, KC_UP,   KC_PGUP, _______, _______, _______, _______,
        _______,           KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_LEFT, KC_DOWN, KC_RGHT, _______, _______,          _______,
        _______,  _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_HOME, _______, KC_END,  _______, _______,          _______,
        _______,           _______, _______, _______,          _______,          XXXXXXX, _______, _______, XXXXXXX, _______,          _______
    ),

    [_FN1] = LAYOUT(
        _______,           _______, _______, _______, SLEEP,   _______, _______, _______, _______, _______, _______, _______, _______, XXXXXXX, KC_DEL,
        _______,           _______, _______, _______, _______, _______, _______, _______, KC_VOLU, _______, _______, _______, _______, _______,
        _______,           _______, _______, _______, _______, _______, _______, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______,          _______,
        _______,  _______, _______, _______, _______, _______, _______, _______, _______, KC_VOLD, _______, _______, _______,          _______,
        _______,           _______, _______, _______,          _______,          XXXXXXX, _______, _______, XXXXXXX, _______,          _______
    ),

    [_FN2] = LAYOUT(
        _______,           _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, XXXXXXX, RESET,
        _______,           _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______,           _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______,           _______, _______, _______,          _______,          XXXXXXX, _______, _______, XXXXXXX, _______,          VERSION
    ),

    [_THIRD] = LAYOUT(
        _______,           _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, XXXXXXX, _______,
        _______,           _______, _______, _______, _______, _______, _______, KC_BTN1, KC_MS_U, KC_BTN2, _______, _______, _______, _______,
        _______,           _______, _______, _______, _______, _______, _______, KC_MS_L, KC_MS_D, KC_MS_R, _______, _______,          _______,
        _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______,           _______, _______, _______,          _______,          XXXXXXX, _______, _______, XXXXXXX, _______,          _______
    )

};
