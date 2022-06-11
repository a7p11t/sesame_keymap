/* Copyright 2020 kb-elmo<mail@elmo.space>
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
#include QMK_KEYBOARD_H

// Define layer name
#define KL_QWERTY 0
#define KL_LOWER 1
#define KL_RAISE 2
#define KL_ADJUST 3

// Define keycode alias
#define ________ KC_TRNS
#define A_IME LCTL(KC_SPC)
#define A_LOCK LGUI(KC_L)
#define A_PSCR LGUI(KC_PSCR)
#define MO_L MO(KL_LOWER)
#define MO_R MO(KL_RAISE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [KL_QWERTY] = LAYOUT_alice(
        /**/ KC_PAUS , KC_ESC  , KC_1    , KC_2    , KC_3    , KC_4    , KC_5    , KC_6    , KC_7    , KC_8    , KC_9    , KC_0    , KC_MINS , KC_EQL  , KC_BSPC ,
        /**/ A_PSCR  , KC_GRV  , KC_Q    , KC_W    , KC_E    , KC_R    , KC_T    , KC_Y    , KC_U    , KC_I    , KC_O    , KC_P    , KC_LBRC , KC_RBRC , KC_BSLS ,
        /**/ KC_F5   , KC_TAB  , KC_A    , KC_S    , KC_D    , KC_F    , KC_G    , KC_H    , KC_J    , KC_K    , KC_L    , KC_SCLN , KC_QUOT ,           KC_ENT  ,
        /**/           KC_LSFT , KC_Z    , KC_X    , KC_C    , KC_V    , KC_B    , A_IME   , KC_N    , KC_M    , KC_COMM , KC_DOT  , KC_SLSH , KC_RSFT , MO_L    ,
        /**/           KC_LCTL ,           KC_LALT , KC_LGUI ,           KC_SPC  , KC_ENT  ,                     MO_R    ,                     KC_RCTL
    ),
    [KL_LOWER] = LAYOUT_alice(
        /**/ ________, KC_GRV  , KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5   , KC_F6   , KC_F7   , KC_F8   , KC_F9   , KC_F10  , KC_F11  , KC_F12  , KC_DEL  ,
        /**/ ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
        /**/ A_LOCK  , ________, KC_HOME , KC_PGDN , KC_PGUP , KC_END  , ________, KC_LEFT , KC_DOWN , KC_UP   , KC_RGHT , ________, ________,           ________,
        /**/           ________, ________, ________, ________, ________, A_IME   , KC_VOLD , KC_VOLU , KC_MUTE , KC_MPRV , KC_MNXT , KC_MPLY , ________, ________,
        /**/           ________,           ________, ________,           ________, ________,                     ________,                     ________
    ),
    [KL_RAISE] = LAYOUT_alice(
        /**/ ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
        /**/ ________, ________, ________, ________, ________, ________, KC_MINS , KC_EQL  , ________, ________, KC_LBRC , KC_RBRC , ________, ________, ________,
        /**/ ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,           ________,
        /**/           ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
        /**/           ________,           ________, ________,           ________, ________,                     ________,                     ________
    ),
    [KL_ADJUST] = LAYOUT_alice(
        /**/ ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
        /**/ ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
        /**/ ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,           ________,
        /**/           ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
        /**/           ________,           ________, ________,           ________, ________,                     ________,                     ________
    )
};