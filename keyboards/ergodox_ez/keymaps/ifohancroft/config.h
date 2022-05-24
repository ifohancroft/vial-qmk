/* Copyright 2022 IFo Hancroft
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

// place overrides here
#define FORCE_NKRO
#define USB_POLLING_INTERVAL_MS 1
#ifdef TAPPING_TOGGLE
    #undef TAPPING_TOGGLE
#endif
#define TAPPING_TOGGLE 3
#define VIAL_KEYBOARD_UID {0x6F, 0xBC, 0x77, 0x48, 0xE1, 0x7B, 0xF1, 0x46}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 13 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 2 }

