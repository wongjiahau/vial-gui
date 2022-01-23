/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#ifdef RGBLIGHT_ENABLE
#    undef RGBLED_NUM
#    define RGBLIGHT_ANIMATIONS
#    define RGBLED_NUM 54
#    undef RGBLED_SPLIT
#    define RGBLED_SPLIT \
        { 27, 27 }
#    define RGBLIGHT_LIMIT_VAL 120
#    define RGBLIGHT_HUE_STEP  10
#    define RGBLIGHT_SAT_STEP  17
#    define RGBLIGHT_VAL_STEP  17
#endif

#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"

#define TAPPING_TERM 200
#define PERMISSIVE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT
#define COMBO_TERM 30
#define VIAL_KEYBOARD_UID {0xFF, 0x10, 0xBA, 0x45, 0x13, 0xD1, 0x84, 0x30}

#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 11 }
