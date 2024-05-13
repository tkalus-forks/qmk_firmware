#include QMK_KEYBOARD_H

#define MACSLEP LSFT(LCTL(KC_SYSTEM_POWER))  // Screen Lock/Sleep on macos - Ctrl-Shift-Power

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/*
 * Keys are stacked, more or less, on the diagonal....
 * `|x|` and `XXXXXXX` are unpopulated switch sites on a 61% DZ60.
 */

  /* Qwerty
   * ,---------------------------------------------------------------------------------------.
   * | `~ |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |x|  Bkspc |
   * |---------------------------------------------------------------------------------------+
   * | Tab    |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |  \   |
   * |---------------------------------------------------------------------------------------+
   * | Ctrl/Esc|  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |   Enter   |
   * |---------------------------------------------------------------------------------------+
   * | Shift    |x|  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  |x|   Shift    |
   * |---------------------------------------------------------------------------------------+
   * | FN1  |  Alt  |  Cmd  |              Space                  | Cmd  | Alt  | FN1 | Ctrl |
   * `---------------------------------------------------------------------------------------'
   */

  LAYOUT_all(
      KC_GRV,           KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  XXXXXXX, KC_BSPC,
      KC_TAB,           KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,          KC_BSLS,
      LCTL_T(KC_ESC),   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
      KC_LSFT, XXXXXXX, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,                   KC_RSFT, XXXXXXX,
      MO(1),   KC_LALT, KC_LGUI,                            KC_SPC,                             KC_RGUI, KC_RALT,          MO(1),   KC_RCTL
      ),

  /* FN1 Layer (Movement)
   * ,---------------------------------------------------------------------------------------.
   * | Esc |  F1 |  F2 |  F3 |  F4 |  F5 |  F6 |  F7 |  F8 |  F9 | F10 | F11 | F12 |x|       |
   * |---------------------------------------------------------------------------------------+
   * |  FN2   |PgUp |  U  |PgDn |     |     |     |     | PgUp|     |     | Home| End | SLEEP|
   * |---------------------------------------------------------------------------------------+
   * |         |  L  |  D  |  R  |     |     |  L  |  D  |  U  |  R  |     |     |           |
   * |---------------------------------------------------------------------------------------+
   * |          |x|Home | End |     |     |     | PgDn|     |     |     |     |x|            |
   * |---------------------------------------------------------------------------------------+
   * |      |       |       |                                     |      | FN2  |     | F16  |
   * `---------------------------------------------------------------------------------------'
   */

  LAYOUT_all(
      KC_ESC,           KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,    KC_F10,  KC_F11,  KC_F12,  XXXXXXX, KC_NO,
      MO(2),            KC_PGUP, KC_UP,   KC_PGDN, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_PGUP, KC_NO,    KC_NO,   KC_HOME, KC_END,           MACSLEP,
      KC_TRNS,          KC_LEFT, KC_DOWN, KC_RIGHT,KC_NO,   KC_NO,   KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, KC_NO,   KC_NO,            KC_NO,
      KC_TRNS, XXXXXXX, KC_HOME, KC_END,  KC_NO,   KC_NO,   KC_NO,   KC_PGDN, KC_NO,   KC_NO,   KC_NO,    KC_NO,                     KC_TRNS, XXXXXXX,
      KC_TRNS, KC_TRNS, KC_TRNS,                            KC_NO,                              KC_TRNS,  MO(2),            KC_TRNS, KC_F16
      ),

  /* FN2 Layer (Keyboard LED, Screen Brightness, and Media)
   * ,---------------------------------------------------------------------------------------.
   * |     | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 |ScrLk|Pause|x|BtLoadr|
   * |---------------------------------------------------------------------------------------+
   * |        |     |     |     |     |     |     |     |     |     |     |     |     |      |
   * |---------------------------------------------------------------------------------------+
   * | CapsLck |     |     |     |     |     |PrevT|     |     |NextT|     |     |           |
   * |---------------------------------------------------------------------------------------+
   * |          |x|     |     |     |     |     |     |Mute |Vol- |Vol+ |Pl/Ps|x|            |
   * |---------------------------------------------------------------------------------------+
   * |      |       |       |                                     |      |      |     |      |
   * `---------------------------------------------------------------------------------------'
   */

  LAYOUT_all(
      KC_TRNS,          KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,  KC_SCRL, KC_PAUS, XXXXXXX, QK_BOOT,
      KC_NO,            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_NO,
      KC_CAPS,          KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_MPRV, KC_NO,   KC_NO,   KC_MNXT, KC_NO,   KC_NO,            KC_NO,
      KC_TRNS, XXXXXXX, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_MUTE, KC_VOLD, KC_VOLU, KC_MPLY,                   KC_TRNS, XXXXXXX,
      KC_TRNS, KC_TRNS, KC_TRNS,                            KC_NO,                              KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS
      ),
};
