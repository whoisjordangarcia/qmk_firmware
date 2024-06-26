#include QMK_KEYBOARD_H

#define KC_SUPER LGUI(KC_LALT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Keymap (Base Layer) Default Layer
   * ,----------------------------------------------------------------.
   * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp |Home|
   * |----------------------------------------------------------------|
   * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  |PgUp|
   * |----------------------------------------------------------------|
   * |L1   |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|  Return |PgDn|
   * |----------------------------------------------------------------|
   * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift | Up|End |
   * |----------------------------------------------------------------|
   * |Ctrl|Win |Alt | space   | L1| space   |Alt| FN|Ctrl|Lef|Dow|Rig |
   * `----------------------------------------------------------------'
   */
[0] = LAYOUT_65_ansi_split_space(
  KC_ESC,  KC_1,    KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_ESC,
  KC_TAB,  KC_Q,    KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_HOME,
  MO(1), KC_A,    KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT, KC_PGUP,
  KC_LSFT, KC_Z,    KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,           KC_UP, KC_PGDN,
  KC_LCTL, KC_LALT, KC_LGUI,   KC_SPC,        KC_SUPER,        KC_SPC,  KC_RALT,  TO(2), KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT          ),

  /* Keymap Fn Layer
   * ,----------------------------------------------------------------.
   * |~ `|F1 |F2 |F3 |F4 |F5 |F6 |F7 |F8 |F9 |F10|F11|F12|Del    |Ins |
   * |----------------------------------------------------------------|
   * |CPSLK| RW|PlY |FWD   |   |   |   |   |  |  |  |   |   |    |    |
   * |----------------------------------------------------------------|
   * |    |DOWN|UP|Mute|   |   |   |   |Left|Down|Up|Rig|        |    |
   * |----------------------------------------------------------------|
   * |        |   |   |   |   |   |   |   |   |  |  |         |Up|    |
   * |----------------------------------------------------------------|
   * |    |    |    |          |    |      |   |   |   |Left|Down|Rig |
   * `----------------------------------------------------------------'
   */
[1] = LAYOUT_65_ansi_split_space(
   KC_GRV,  KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9, KC_F10, KC_F11, KC_F12,          KC_DEL,KC_INS,
   KC_LCAP,KC_MRWD,  KC_MPLY,KC_MFFD,_______,_______,_______,_______,_______,_______,_______,_______,_______,     _______,RGB_TOG,
   _______,_______,KC_VOLD,KC_VOLU,KC_MUTE,_______,_______,KC_LEFT,KC_DOWN,KC_UP,KC_RGHT,_______,_______,RGB_MODE_FORWARD,
   _______,_______,_______,_______,_______,_______,_______,_______, _______,_______,_______, _______,KC_UP,_______,
   _______,  _______,  _______,_______,            _______, _______,  _______,_______,_______,KC_LEFT,KC_DOWN, KC_RGHT),


/* Keymap (Game)
   * ,----------------------------------------------------------------.
   * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp |Home|
   * |----------------------------------------------------------------|
   * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  |PgUp|
   * |----------------------------------------------------------------|
   * |L1   |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|  Return |PgDn|
   * |----------------------------------------------------------------|
   * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift | Up|End |
   * |----------------------------------------------------------------|
   * |Ctrl|Win |Alt | space   | L1| space   |Alt| FN|Ctrl|Lef|Dow|Rig |
   * `----------------------------------------------------------------'
   */
[2] = LAYOUT_65_ansi_split_space(
  KC_ESC,  KC_1,    KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_ESC,
  KC_TAB,  KC_Q,    KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_HOME,
  MO(1), KC_A,    KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT, KC_PGUP,
  KC_LSFT, KC_Z,    KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,           KC_UP, KC_PGDN,
  KC_LCTL, KC_LALT, KC_SPC,   KC_SPC,        KC_SUPER,        KC_SPC,  KC_RALT,   TO(1), KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT          ),
};
