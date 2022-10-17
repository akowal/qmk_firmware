// Copyright 2022 akowal (@akowal)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

#define VENDOR_ID    0x1337
#define PRODUCT_ID   0x4D49
#define DEVICE_VER   0x0001
#define MANUFACTURER akowal
#define PRODUCT      mimi

#define MATRIX_ROWS 8
#define MATRIX_COLS 6
#define DIODE_DIRECTION ROW2COL
#define MATRIX_ROW_PINS { B1, B3, B2, B6 }
#define MATRIX_COL_PINS { D4, C6, D7, E6, B4, B5 }
#define SOFT_SERIAL_PIN D0
#define DEBOUNCE 5
#define MASTER_RIGHT

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

#define RGB_DI_PIN D2

#ifdef RGB_MATRIX_ENABLE
#    define SPLIT_TRANSPORT_MIRROR
#    define DRIVER_LED_TOTAL 46
#    define RGB_MATRIX_SPLIT { 23, 23 }
#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 80
#    define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_TYPING_HEATMAP
#    define RGB_MATRIX_STARTUP_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS
#    define RGB_DISABLE_WHEN_USB_SUSPENDED
#    define RGB_MATRIX_KEYPRESSES
// RGB Matrix Animation modes. Explicitly enabled
// For full list of effects, see:
// https://docs.qmk.fm/#/feature_rgb_matrix?id=rgb-matrix-effects
#    define ENABLE_RGB_MATRIX_BREATHING
#    define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
// #    define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
// #    define ENABLE_RGB_MATRIX_RAINDROPS
#    define ENABLE_RGB_MATRIX_PIXEL_RAIN
// #    define BACKLIGHT_BREATHING

#    define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#    define ENABLE_RGB_MATRIX_TYPING_HEATMAP
// #    define RGB_MATRIX_TYPING_HEATMAP_DECREASE_DELAY_MS 50

#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
#endif
