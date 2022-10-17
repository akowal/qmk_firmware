// Copyright 2022 akowal (@akowal)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

#define VENDOR_ID    0x1337
#define PRODUCT_ID   0x4D49
#define DEVICE_VER   0x0002
#define MANUFACTURER akowal
#define PRODUCT      mimi

#define MATRIX_ROWS 8
#define MATRIX_COLS 6
#define DIODE_DIRECTION ROW2COL
#define MATRIX_ROW_PINS { B1, B3, B2, B6 }
#define MATRIX_COL_PINS { D4, C6, D7, E6, B4, B5 }
#define SOFT_SERIAL_PIN D0
#define DEBOUNCE 5
#define MASTER_LEFT

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
