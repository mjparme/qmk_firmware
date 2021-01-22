/*
Copyright 2020 mjparme

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

#include "config_common.h"

#undef MATRIX_COL_PINS
#undef UNUSED_PINS

//Uses the Elite-C instead of ProMicro so has a few unused pins
#define MATRIX_COL_PINS \
    { C6, D7, E6, B4, B5, D5, C7, B6, B2, B3, B1, F7, F6, F5, F4 }
#define UNUSED_PIN {C7, F1, F0}

//B7 is not available on a ProcMicro but is one of the extra pins on an Elite-C
 #define BACKLIGHT_PIN B7
 #define BACKLIGHT_LEVELS 5
