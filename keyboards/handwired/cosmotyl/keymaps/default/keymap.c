#include QMK_KEYBOARD_H

enum custom_layer {
    _DVORAK,
    _LOWER,
    _RAISE,
};

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_DVORAK] = LAYOUT(
        KC_F12,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,                          KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,
        KC_GRAVE, KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_LGUI,    LOWER,    KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_EQUAL,
        KC_TAB,   KC_QUOT,  KC_COMM,  KC_DOT,   KC_P,     KC_Y,     KC_BTN3,    XXXXXXX,  KC_F,     KC_G,     KC_C,     KC_R,     KC_L,     KC_SLASH,
        KC_ESC,   KC_A,     KC_O,     KC_E,     KC_U,     KC_I,     KC_BTN2,    KC_DEL,   KC_D,     KC_H,     KC_T,     KC_N,     KC_S,     KC_MINS,
        KC_LSFT,  KC_SCLN,  KC_Q,     KC_J,     KC_K,     KC_X,                           KC_B,     KC_M,     KC_W,     KC_V,     KC_Z,     KC_RSFT,
        XXXXXXX,  KC_BTN2,  XXXXXXX,  KC_LALT,                                                                KC_RALT,  XXXXXXX,  KC_BTN2,  KC_RCTL,
                                      KC_LCTL,  KC_SPC,   KC_LSFT,                                            RAISE,
                                                KC_BTN2,  KC_BTN1,                        KC_6,     KC_RSFT,  KC_BSPC
    ),

    [_LOWER] = LAYOUT(
        _______,  _______,  _______,  _______,  _______,  _______,                        _______,  _______,  _______,  _______,  _______,  _______,
        XXXXXXX,  KC_INS,   KC_PSCR,  XXXXXXX,  KC_PAUS,  KC_HOME,  _______,    _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
        _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_PGUP,  _______,    _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
        _______,  KC_MSTP,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_PGDN,  _______,    _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
        _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_END,                         XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  _______,
        _______,  XXXXXXX,  XXXXXXX,  _______,                                                                _______,  XXXXXXX,  XXXXXXX,  _______,
                                      _______,  _______,  _______,                                            _______,
                                                _______,  _______,                        _______,  _______,  _______
    ),

    [_RAISE] = LAYOUT(
        _______,  _______,  _______,  _______,  _______,  _______,                        _______,  _______,  _______,  _______,  _______,  _______,
        XXXXXXX,  XXXXXXX,  KC_LPRN,  KC_EQUAL, KC_RPRN,  XXXXXXX,  _______,    _______,  KC_CAPS,  XXXXXXX,  KC_PSLS,  KC_PAST,  KC_PMNS,  XXXXXXX,
        _______,  XXXXXXX,  KC_LBRC,  KC_UP,    KC_RBRC,  KC_K,     _______,    _______,  XXXXXXX,  KC_P7,    KC_P8,    KC_P9,    KC_PPLS,  XXXXXXX,
        _______,  XXXXXXX,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_PIPE,  _______,    _______,  XXXXXXX,  KC_P4,    KC_P5,    KC_P6,    KC_ENT,   XXXXXXX,
        _______,  XXXXXXX,  KC_LCBR,  XXXXXXX,  KC_RCBR,  KC_BSLS,                        XXXXXXX,  KC_P1,    KC_P2,    KC_P3,    KC_PENT,  _______,
        _______,  XXXXXXX,  XXXXXXX,  _______,                                                                KC_P0,    KC_PDOT,  KC_PENT,  _______,
                                      _______,  _______,  _______,                                            _______,
                                                _______,  _______,                        _______,  _______,  _______
    )
};
