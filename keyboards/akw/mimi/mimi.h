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
    { L05, L04, L03, L02, L01, L00 }, \
    { L15, L14, L13, L12, L11, L10 }, \
    { L25, L24, L23, L22, L21, L20 }, \
    { KC_NO, LT4, LT3, LT2, LT1, LT0 }, \
\
    { R05, R04, R03, R02, R01, R00 }, \
    { R15, R14, R13, R12, R11, R10 }, \
    { R25, R24, R23, R22, R21, R20 }, \
    { KC_NO, RT4, RT3, RT2, RT1, RT0 } \
}
