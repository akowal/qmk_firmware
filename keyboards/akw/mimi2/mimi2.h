// Copyright 2022 akowal (@akowal)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
    L05, L04, L03, L02, L01, L00,    R00, R01, R02, R03, R04, R05, \
    L15, L14, L13, L12, L11, L10,    R10, R11, R12, R13, R14, R15, \
    L25, L24, L23, L22, L21, L20,    R20, R21, R22, R23, R24, R25, \
                   LT2, LT1, LT0,    RT0, RT1, RT2, \
                        LT4, LT3,    RT3, RT4  \
) { \
    { L00, L01, L02, L03, L04, L05 }, \
    { L10, L11, L12, L13, L14, L15 }, \
    { L20, L21, L22, L23, L24, L25 }, \
    { LT0, LT1, LT2, LT3, LT4, KC_NO }, \
\
    { R00, R01, R02, R03, R04, R05 }, \
    { R10, R11, R12, R13, R14, R15 }, \
    { R20, R21, R22, R23, R24, R25 }, \
    { RT0, RT1, RT2, RT3, RT4, KC_NO }, \
}
