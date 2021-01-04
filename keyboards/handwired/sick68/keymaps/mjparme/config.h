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

#define MANUFACTURER mjparme

//Uses the Elite-C instead of ProMicro so has a few unused pins
#define UNUSED_PIN {D5, C7, F1, F0, B0}

//B7 is not available on a ProcMicro but is one of the extra pins on an Elite-C
 #define BACKLIGHT_PIN B7
 #define BACKLIGHT_LEVELS 3
