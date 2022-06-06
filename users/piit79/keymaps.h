#define KM_BASE_R1_L KC_GRV,     KC_1,     KC_2,     KC_3,    KC_4,     KC_5
#define KM_BASE_R2_L THRD_TAB,   KC_Q,     KC_W,     KC_E,    KC_R,     KC_T
#define KM_BASE_R3_L LCTL_ESC,   KC_A,     KC_S,     KC_D,    KC_F,     KC_G
#define KM_BASE_R4_L KC_LSFT,    KC_Z,     KC_X,     KC_C,    KC_V,     KC_B
#define KM_BASE_R5_L FN1_WAKE,  KC_LCTL,  KC_LGUI,  KC_LALT, LOWER,    NAV_SPC

#define KM_BASE_R1_R  KC_6,     KC_7,     KC_8,     KC_9,     KC_0,    KC_BSPC
#define KM_BASE_R2_R  KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,    KC_DEL
#define KM_BASE_R3_R  KC_H,     KC_J,     KC_K,     KC_L,    KC_SCLN,  KC_QUOT
#define KM_BASE_R4_R  KC_N,     KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  RSFT_ENT
#define KM_BASE_R5_R NAV_SPC,   RAISE,   KC_LEFT,  KC_DOWN,   KC_UP,   KC_RGHT

#define KM_BASE_R1 KM_BASE_R1_L, KM_BASE_R1_R
#define KM_BASE_R2 KM_BASE_R2_L, KM_BASE_R2_R
#define KM_BASE_R3 KM_BASE_R3_L, KM_BASE_R3_R
#define KM_BASE_R4 KM_BASE_R4_L, KM_BASE_R4_R
#define KM_BASE_R5 KM_BASE_R5_L, KM_BASE_R5_R

#define KM_BASE \
        KC_GRV,     KC_1,     KC_2,     KC_3,    KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,    KC_BSPC, \
        THRD_TAB,   KC_Q,     KC_W,     KC_E,    KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,    KC_DEL,  \
        LCTL_ESC,   KC_A,     KC_S,     KC_D,    KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,    KC_SCLN,  KC_QUOT, \
        KC_LSFT,    KC_Z,     KC_X,     KC_C,    KC_V,     KC_B,     KC_N,     KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  RSFT_ENT,\
        FN1_WAKE,  KC_LCTL,  KC_LGUI,  KC_LALT, LOWER,    NAV_SPC,  NAV_SPC,   RAISE,   KC_LEFT,  KC_DOWN,   KC_UP,   KC_RGHT

#define KM_LOWER \
        KC_TILD,  KC_EXLM,   KC_AT,   KC_HASH,   KC_DLR,  KC_PERC,  KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RPRN,  KC_BSPC, \
        KC_TILD,  KC_EXLM,   KC_AT,   KC_HASH,   KC_DLR,  KC_PERC,  KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RPRN,  KC_DEL,  \
        KC_DEL,    KC_F1,    KC_F2,    KC_F3,    KC_F4,   KC_F5,    KC_F6,    KC_UNDS,  KC_PLUS,  KC_LCBR,  KC_RCBR,  KC_PIPE, \
        _______,   KC_F7,    KC_F8,    KC_F9,    KC_F10,  KC_F11,   KC_F12,   S(NUHS),  S(NUBS),  KC_HOME,  KC_END,   _______, \
        _______,  _______,  _______,  _______,  _______,  KC_SPC,   KC_SPC,   _______,  _______,  KC_RALT,  KC_APP,   _______

#define KM_RAISE \
        KC_GRV,    KC_1,     KC_2,     KC_3,     KC_4,    KC_5,     KC_6,      KC_7,     KC_8,     KC_9,     KC_0,    KC_BSPC, \
        KC_GRV,    KC_1,     KC_2,     KC_3,     KC_4,    KC_5,     KC_6,      KC_7,     KC_8,     KC_9,     KC_0,    KC_DEL,  \
        KC_DEL,    KC_F1,    KC_F2,    KC_F3,    KC_F4,   KC_F5,    KC_F6,    KC_MINS,  KC_EQL,   KC_LBRC,  KC_RBRC,  KC_BSLS, \
        _______,   KC_F7,    KC_F8,    KC_F9,    KC_F10,  KC_F11,   KC_F12,   KC_NUHS,  KC_NUBS,  KC_PGUP,  KC_PGDN,  _______, \
        _______,  _______,  _______,  _______,  _______,  KC_SPC,   KC_SPC,   _______,  KC_MPLY,  KC_VOLD,  KC_VOLU,  KC_MNXT

#define KM_NAV \
        KC_GRV,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, \
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_PGDN,   KC_UP,   KC_PGUP,  _______,  _______, \
        _______,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,   KC_LEFT,  KC_DOWN,  KC_RGHT,  _______,  _______, \
        _______,   KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,  KC_HOME,  _______,  KC_END,   _______,  _______, \
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______

#define KM_FN1 \
        _______,  _______,  _______,  _______,  KC_SLEP,  _______,  _______,  _______,  _______,  _______,  _______,  _______, \
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, \
        _______,  _______,  _______,  _______,  _______,  TG(_GAME),_______,  _______,  _______,  _______,  _______,  _______, \
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, \
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______

#define KM_THIRD \
        _______,   KC_6,      KC_7,     KC_8,     KC_9,     KC_0,   _______,  _______,  _______,  _______,  _______,  _______, \
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_BTN1,  KC_MS_U,  KC_BTN2,  _______,  _______, \
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_MS_L,  KC_MS_D,  KC_MS_R,  _______,  _______, \
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, \
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______

#ifdef RGBLIGHT_ENABLE
#define KM_ADJ \
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  RESET,   \
        _______,  RGB_TOG,  RGB_MOD,  RGB_HUD,  RGB_HUI,  _______,  _______,  TERM_ON,  KC_VOLU,  _______,  _______,  _______, \
        _______,  RGB_SAD,  RGB_SAI,  RGB_VAD,  RGB_VAI,  _______,  _______,  KC_MPRV,  KC_MPLY,  KC_MNXT,  _______,  _______, \
        _______,   MUV_DE,   MUV_IN,   MU_ON,    MU_OFF,   MI_ON,    MI_OFF,  _______,  KC_VOLD,  _______,  _______,  _______, \
        _______,  _______,  _______,  _______,  _______,   KC_SPC,   KC_SPC,  _______,  _______,  _______,  MAKE,     VERSION
#else
#define KM_ADJ \
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  RESET,   \
        _______,  _______,   DEBUG,   _______,  _______,  _______,  _______,  TERM_ON,  KC_VOLU,  _______,  _______,  _______, \
        _______,  _______,   MU_MOD,   AU_ON,    AU_OFF,  AG_NORM,  AG_SWAP,  KC_MPRV,  KC_MPLY,  KC_MNXT,  _______,  _______, \
        _______,   MUV_DE,   MUV_IN,   MU_ON,    MU_OFF,   MI_ON,    MI_OFF,  _______,  KC_VOLD,  _______,  _______,  _______, \
        _______,  _______,  _______,  _______,  _______,   KC_SPC,   KC_SPC,  _______,  _______,  _______,  MAKE,     VERSION
#endif

#define KM_GAME \
        KC_GESC,    KC_1,     KC_2,     KC_3,    KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,    KC_BSPC, \
        THRD_TAB,   KC_Q,     KC_W,     KC_E,    KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,    KC_DEL,  \
        LCTL_ESC,   KC_A,     KC_S,     KC_D,    KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,    KC_SCLN,  KC_QUOT, \
        KC_LSFT,    KC_Z,     KC_X,     KC_C,    KC_V,     KC_B,     KC_N,     KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  RSFT_ENT,\
        FN1_WAKE,  KC_LCTL,  KC_LALT,  KC_LALT, LOWER,    NAV_SPC,  NAV_SPC,   RAISE,   KC_LEFT,  KC_DOWN,   KC_UP,   KC_RGHT
