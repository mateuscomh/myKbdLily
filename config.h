/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

#define SPLIT_USB_DETECT
#define MASTER_LEFT

// Timeout to check side
#define SPLIT_USB_TIMEOUT 1000
#define SPLIT_WATCHDOG_ENABLE
#define SPLIT_WATCHDOG_TIMEOUT 3000

// oled configs
#define OLED_TIMEOUT 120000
#define OLED_BRIGHTNESS 150

#define MOUSE_DELAY 12
#define MOUSEKEY_MAX_SPEED 4
#define MOUSE_TIME_TO_MAX 90
#define MOUSE_MOVE_DELTA 6
#define MOUSEKEY_INTERVAL 16

#define SPLIT_WPM_ENABLE
//#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 1000
