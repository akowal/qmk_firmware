// Copyright 2022 akowal (@akowal)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {
    BASE_COLEMAK, NAV, NUM, SYM, FUN, CTRL, MEDIA
}; //, COLEMAK, HALMAK, MTGAP, CTGAP, NAV, NUM, SYM, FUN, CTL, MEDIA, MOUSE};

#define K(keycode) KC_##keycode
#define LC(keycode) LCTL_T(K(keycode))
#define LA(keycode) LALT_T(K(keycode))
#define LS(keycode) LSFT_T(K(keycode))
#define LG(keycode) LGUI_T(K(keycode))
#define RC(keycode) RCTL_T(K(keycode))
#define RA(keycode) RALT_T(K(keycode))
#define RS(keycode) RSFT_T(K(keycode))
#define RG(keycode) LGUI_T(K(keycode))

#define BASE( \
 L00, L01, L02, L03, L04, L05, /**/ R00, R01, R02, R03, R04, R05, \
 L10, L11, L12, L13, L14, L15, /**/ R10, R11, R12, R13, R14, R15, \
 L20, L21, L22, L23, L24, L25, /**/ R20, R21, R22, R23, R24, R25 \
) LAYOUT( \
   K(L00), K(L01),  K(L02),  K(L03),  K(L04),  K(L05), /**/ K(R00), K(R01),  K(R02),   K(R03),  K(R04), K(R05), \
   K(L10), LC(L11), LA(L12), LS(L13), LG(L14), K(L15), /**/ K(R10), RG(R11), RS(R12), RA(R13), RC(R14), K(R15), \
   LT(CTRL, K(L20)),  K(L21),  K(L22),  K(L23),  K(L24), K(L25), /**/ K(R20), K(R21),  K(R22),   K(R23),  K(R24), LT(CTRL, K(R25)), \
         LT(SYM, KC_ESC),  LT(NAV, KC_SPC), LT(MEDIA, KC_TAB), /**/ LT(FUN, KC_DEL), LT(NUM, KC_BSPC), LT(SYM, KC_ENT), \
                                     KC_LEFT, KC_RGHT, /**/ KC_DOWN,  KC_LSFT\
)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [BASE_COLEMAK] = BASE(
      EQL,   Q,    W,    F,    P,    B,          J,    L,    U,    Y,    SCLN, MINS,
      GRV,   A,    R,    S,    T,    G,          M,    N,    E,    I,    O,    QUOT,
      BSLS,  Z,    X,    C,    D,    V,          K,    H,    COMM, DOT,  SLSH, CAPS
  ),

//   [BASE_HALMAK] = BASE(
//       NO,    W,    E,    L,    B,     Z,         SCLN, Q,    U,    D,    J,    MINS,
//       GRV,   S,    H,    N,    T,     COMM,      DOT,  A,    E,    O,    I,    EQL,
//       BSLS,  F,    M,    V,    C,     SLSH,      G,    P,    X,    K,    Y,    QUOT
//   ),

//   [MTGAP] = BASE(
//            Y,    P,    O,    U,    J,       K,    D,    L,    C,    W,
//            I,    N,    E,    A, COMM,       M,    H,    T,    S,    R,
//            Q,    Z, SLSH,  DOT, SCLN,       B,    F,    G,    V,    X
//   ),

// ISRT, beakl, hands down

  [NAV] = LAYOUT(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,        XXXXXXX, XXXXXXX, KC_PGDN, KC_PGUP, XXXXXXX, XXXXXXX,
    XXXXXXX, KC_LCTL, KC_LALT, KC_LSFT, KC_LGUI, XXXXXXX,        KC_HOME, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_END,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                               XXXXXXX, XXXXXXX, XXXXXXX,        _______, _______, _______,
                                        XXXXXXX, XXXXXXX,        XXXXXXX, XXXXXXX
  ),

  [NUM] = LAYOUT(
    XXXXXXX, KC_PLUS, KC_7,    KC_8,    KC_9,    KC_SLSH,        XXXXXXX, KC_LBRC, KC_LPRN, KC_LCBR, XXXXXXX, XXXXXXX,
    XXXXXXX, KC_MINS, KC_4,    KC_5,    KC_6,    KC_EQL,         XXXXXXX, KC_RGUI, KC_RSFT, KC_RALT, KC_RCTL, XXXXXXX,
    XXXXXXX, KC_ASTR, KC_1,    KC_2,    KC_3,    XXXXXXX,        XXXXXXX, KC_RBRC, KC_RPRN, KC_RCBR, XXXXXXX, XXXXXXX,
                               KC_DOT,  KC_0,    XXXXXXX,        XXXXXXX, XXXXXXX, XXXXXXX,
                                        XXXXXXX, XXXXXXX,        XXXXXXX, XXXXXXX
  ),

  [SYM] = LAYOUT(
    XXXXXXX, XXXXXXX, KC_AMPR, KC_ASTR, KC_TILD, XXXXXXX,        XXXXXXX, XXXXXXX, KC_LCBR, KC_RCBR, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, KC_DLR,  KC_PERC, KC_CIRC, KC_PIPE,        XXXXXXX, XXXXXXX, KC_LPRN, KC_RPRN, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, KC_EXLM, KC_AT,   KC_HASH, XXXXXXX,        XXXXXXX, XXXXXXX, KC_LBRC, KC_RBRC, XXXXXXX, XXXXXXX,
                               XXXXXXX, XXXXXXX, XXXXXXX,        XXXXXXX, XXXXXXX, XXXXXXX,
                                        XXXXXXX, XXXXXXX,        XXXXXXX, XXXXXXX
  ),

  [FUN] = LAYOUT(
    KC_F16,  KC_F13,  KC_F7,   KC_F8,   KC_F9,   KC_F10,         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    KC_F17,  KC_F14,  KC_F4,   KC_F5,   KC_F6,   KC_F11,         XXXXXXX, KC_RGUI, KC_RSFT, KC_RALT, KC_RCTL, XXXXXXX,
    KC_F18,  KC_F15,  KC_F1,   KC_F2,   KC_F3,   KC_F12,         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                               XXXXXXX, XXXXXXX, XXXXXXX,        XXXXXXX, XXXXXXX, XXXXXXX,
                                        XXXXXXX, XXXXXXX,        XXXXXXX, XXXXXXX
  ),

  [MEDIA] = LAYOUT(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,        XXXXXXX, KC_VOLD, KC_VOLU, KC_MUTE, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,        XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,        XXXXXXX, KC_BRID, KC_BRIU, XXXXXXX, XXXXXXX, XXXXXXX,
                               XXXXXXX, XXXXXXX, XXXXXXX,        XXXXXXX, XXXXXXX, XXXXXXX,
                                        XXXXXXX, XXXXXXX,        XXXXXXX, XXXXXXX
  ),

  [CTRL] = LAYOUT(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RESET,          RESET,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, EEP_RST,        EEP_RST, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                               XXXXXXX, XXXXXXX, XXXXXXX,        XXXXXXX, XXXXXXX, XXXXXXX,
                                        XXXXXXX, XXXXXXX,        XXXXXXX, XXXXXXX
  )

  // [SYM] = LAYOUT_split_3x5_5(
  //   KC_TILD, KC_AT,   KC_EXLM, KC_LCBR, KC_RCBR,        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //   KC_GRV,  KC_SCLN, KC_COLN, KC_LPRN, KC_RPRN,        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //   KC_UNDS, KC_PIPE, KC_AMPR, KC_LBRC, KC_RBRC,        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //                     KC_LCBR, KC_LPRN, KC_LBRC,        XXXXXXX, XXXXXXX, XXXXXXX,
  //                              XXXXXXX, XXXXXXX,        XXXXXXX, XXXXXXX
  // ),

  // [CTL] = LAYOUT_split_3x5_5(
  //   RESET,       DF(COLEMAK), DF(HALMAK),  DF(MTGAP),   DF(CTGAP),          XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,
  //   XXXXXXX,     DF(COLEMAX), XXXXXXX,     XXXXXXX,     XXXXXXX,            XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,
  //   XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,            XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,
  //                             XXXXXXX,     XXXXXXX,     XXXXXXX,            XXXXXXX,     XXXXXXX,     XXXXXXX,
  //                                          XXXXXXX,     XXXXXXX,            XXXXXXX,     XXXXXXX
  // )

/*
  [NEWLAYER] = LAYOUT(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                               XXXXXXX, XXXXXXX, XXXXXXX,        XXXXXXX, XXXXXXX, XXXXXXX,
                                        XXXXXXX, XXXXXXX,        XXXXXXX, XXXXXXX
  )
*/
};
