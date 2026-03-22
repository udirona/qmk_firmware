/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>
Copyright 2021 Elliot Powell @e11i0t23

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
#include "quantum.h"

#ifdef OLED_ENABLE__OFF

void oled_render_logo(void) {
    static const char PROGMEM mb_logo[] = {
            0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
            0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
            0,  0,  0,  0,  0,  0,  0,128,192, 64, 64, 64, 64, 64, 64,
            64,128,128,128,128,128,  0,  0,  0,  0,  0,  0,  0,128,192, 64, 64,
            64, 64, 64, 64, 64, 64, 64, 64,128,128,  0,  0,  0,  0,  0,  0,  0,
            0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
            0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
            0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 0,  0,  0,  0,  0,  0,
            0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
            0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 12,
            7,  1,  0,128,192, 64, 32, 32, 32, 32, 32, 32, 32, 32, 97, 67,128,
            0,  0,  0,  2,  3,  1,128,192, 96, 32, 48, 16, 16, 16, 16, 16, 48,
            96,192,131,  2,  2,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
           0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
           0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
           0,  0,  0, 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
           0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 12, 12, 12,
           28, 24, 56, 48, 48,  0,  0,  0,  0,240, 60,  6,  1,  0,  0,
           0,128,240,240,240,240,240,224,  0,  0,  0,  1,  6, 62,254,252,254,
           15,  7,  0,192,224,240,240,240,240,224,192,  0,  6, 15, 62,252,240,
           0,  0,  0,  0, 48, 48, 56, 24, 24, 16,  0,  0,  0,  0,  0,  0,  0,
           0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
           0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 0,  0,  0,
           0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
           0,  0,  0,  0,  0,  0,  0,  0,  2,  2,  2,  2,  2, 34,114, 48, 16,
           0,  0,  0, 63,240,192,128,  0,  0,  0, 15, 31, 63, 63, 63, 31, 15,
           0,  0,  0,128,224,112, 63, 63, 63,112,224,128,  7, 15, 31, 63, 63,
           63, 31, 15,  0,  0,128,224,255,127,  0,  0,  0,  0,  2,  2,114,
           98,226,194,130,  2,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
           0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
           0,  0,  0,  0,  0,  0,  0,
    };
    oled_write_raw_P(mb_logo, sizeof(mb_logo));
    //oled_set_cursor(oled_max_chars()/2,oled_max_lines()/2);
    //oled_write_P(PSTR("R2G"), false);
}
#endif
