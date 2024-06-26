#include QMK_KEYBOARD_H

// Fillers to make layering more clear
#define _______ KC_TRNS
#define _DEAD_ KC_TRNS
#define XXXXXXX KC_NO

#define _DL 0     // DEFAULT
#define _UTIL 1   // Utility layer
#define _LIGHTS 3 // Lights layer

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Keymap BL: Base Layer (Default Layer)
   *
   * ,-----------------------------------------------------------.
   * | ' | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | - | = |Backsp |
   * |-----------------------------------------------------------|
   * | Tab | q | w | e | r | t | y | u | i | o | p | [ | ] |enter|
   * |------------------------------------------------------     |
   * | FN  | a | s | d | f | g | h | j | k | l | ; | ' | # |   |
   * |-----------------------------------------------------------|
   * |Shft| < | z | x | c | v | b | n | m | , | . | / |  Shift   |
   * |-----------------------------------------------------------|
   * |Ctrl|Gui |Alt | Space  | FN |  Space  |Alt |Gui | NL |Ctrl |
   * `-----------------------------------------------------------'
   */

    [_DL] = LAYOUT_60_iso_split(
	  //  1          2          3          4          5          6          7          8          9          10         11         12         13                  14
    KC_ESC,       KC_1,       KC_2,     KC_3,       KC_4,     KC_5,       KC_6,     KC_7,     KC_8,       KC_9,       KC_0,     KC_MINS,    KC_EQL,     _DEAD_, KC_BSPC,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
        MO(_UTIL), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSHIFT, _DEAD_, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSHIFT, MT(MOD_RSFT, KC_UP), KC_RSHIFT,
        KC_LCTL, KC_LALT, KC_LGUI, KC_SPC, MO(_LIGHTS), KC_SPC, MO(_MOUSE), MO(_LIGHTS), KC_LEFT, KC_DOWN, KC_RGHT),

    /* Utility Layer
    * ,-----------------------------------------------------------------------------------------.
    * | ` | F1  | F2  | F3  | F4  | F5  | F6  | F7  | F8  | F9  |  F10  |     |     |  | DELETE |
    * |-----------------------------------------------------------------------------------------+
    * | CAPSLOCK  | REWIND | PLAY/PAUSE |  FORWARD  | |    |    |    |  UP  |  |    |  |   |    |
    * |-----------------------------------------------------------------------------------------+
    * |    |    |  VOL DWN  |  VOL UP  |  MUTE  |    |     | LFT | DWN | RHT |    |    |        |
    * |-----------------------------------------------------------------------------------------+
    * |    | SCREENSHOT |  1Pass  |     |     |     |     |     |     |      |        |    |    |
    * |-----------------------------------------------------------------------------------------+
    * |     |       |       |          |         |          |       |   |      |       |        |
    * `-----------------------------------------------------------------------------------------'
    */

    [_UTIL] = LAYOUT_60_iso_split(
        KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, _DEAD_, KC_DEL,
        KC_LCAP, KC_MRWD, KC_MPLY, KC_MFFD, _______, _______, _______, _______, KC_UP, _______, _______, _______, KC_PWR, RESET,
        _______, _______, KC_VOLD, KC_VOLU, KC_MUTE, _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______,
        _______, _DEAD_, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, SCREENSHOT, ONE_PASSWORD, _______, _______, _______),

    /* Light Layer
    * ,-----------------------------------------------------------------------------------------.
    * |   |  |                        |   |   |  |   |   |   |   |    |     |     |  |          |
    * |-----------------------------------------------------------------------------------------+
    * |   | LIGHT TOGGL | NEXT ANIM | REV ANIM  |  |    |    |    |   |    |    |    |    |    |
    * |-----------------------------------------------------------------------------------------+
    * |    |  INCRES HUE  |  DEC HUE  | INC SAT  | DEC SAT   |    |     |  |  |  |    |    |      |
    * |-----------------------------------------------------------------------------------------+
    * |     | INCRE BRIGHT |   DEC BRIGHT   |  |     |     |     |     |     |      |  |    |    |
    * |-----------------------------------------------------------------------------------------+
    * |     |       |       |          |         |          |       |   |      |       |        |
    * `-----------------------------------------------------------------------------------------'
    */

    [_LIGHTS] = LAYOUT_60_iso_split(
        RGB_MODE_PLAIN, RGB_MODE_BREATHE, RGB_MODE_RAINBOW, RGB_MODE_SWIRL, RGB_MODE_SNAKE, RGB_MODE_KNIGHT, RGB_MODE_XMAS, RGB_MODE_GRADIENT, _______, _______, _______, _______, _______, _______, _______,
        _______, RGB_TOG, RGB_MODE_FORWARD, RGB_MODE_REVERSE, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______, _______, _______, _______, _______,
        _______, _DEAD_, _______, _______, _______, BL_TOGG, BL_INC, BL_DEC, BL_BRTG, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______),

};
