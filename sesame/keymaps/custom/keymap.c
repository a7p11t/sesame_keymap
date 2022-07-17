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
#include "a2j/translate_ansi_to_jis.h"

// Define layer name
#define KL_QWERTY 0
#define KL_LOWER 1
#define KL_RAISE 2
#define KL_ADJUST 3

typedef union {
    uint32_t raw;
    struct {
        bool is_jis_mode: 1;
    };
} user_config_t;

user_config_t user_config;

void init_user_config(void) {
    user_config.raw = eeconfig_read_user();
}

bool is_jis_mode(void) {
    return user_config.is_jis_mode;
}

enum custom_keycodes {
    QWERTY = SAFE_RANGE,
    LOWER,
    RAISE,
    ADJUST,
    IME,
    JIS,
    ALTAB
};

// Define keycode alias
#define ________ KC_TRNS
#define A_LOCK LGUI(KC_L)
#define A_PSCR LGUI(KC_PSCR)
#define MO_L MO(KL_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [KL_QWERTY] = LAYOUT_alice(
        /**/ KC_PAUS , KC_ESC  , KC_1    , KC_2    , KC_3    , KC_4    , KC_5    , KC_6    , KC_7    , KC_8    , KC_9    , KC_0    , KC_MINS , KC_EQL  , KC_BSPC ,
        /**/ A_PSCR  , KC_GRV  , KC_Q    , KC_W    , KC_E    , KC_R    , KC_T    , KC_Y    , KC_U    , KC_I    , KC_O    , KC_P    , KC_LBRC , KC_RBRC , KC_BSLS ,
        /**/ KC_F5   , KC_TAB  , KC_A    , KC_S    , KC_D    , KC_F    , KC_G    , KC_H    , KC_J    , KC_K    , KC_L    , KC_SCLN , KC_QUOT ,           KC_ENT  ,
        /**/           KC_LSFT , KC_Z    , KC_X    , KC_C    , KC_V    , KC_B    , IME     , KC_N    , KC_M    , KC_COMM , KC_DOT  , KC_SLSH , KC_RSFT , MO_L    ,
        /**/           KC_LCTL ,           KC_LALT , KC_LGUI ,           LOWER   , RAISE   ,                     KC_RALT ,                     KC_RCTL
    ),
    [KL_LOWER] = LAYOUT_alice(
        /**/ ________, KC_GRV  , KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5   , KC_F6   , KC_F7   , KC_F8   , KC_F9   , KC_F10  , KC_F11  , KC_F12  , KC_DEL  ,
        /**/ ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
        /**/ A_LOCK  , ALTAB   , KC_HOME , KC_PGDN , KC_PGUP , KC_END  , ________, KC_LEFT , KC_DOWN , KC_UP   , KC_RGHT , ________, ________,           ________,
        /**/           ________, ________, ________, ________, ________, IME     , KC_VOLD , KC_VOLU , KC_MUTE , KC_MPRV , KC_MNXT , KC_MPLY , ________, ________,
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
        /**/ JIS     , ________, ________, ________, ________, ________, ________, ________, KC_P7   , KC_P8   , KC_P9   , ________, ________, ________, ________,
        /**/ ________, ________, ________, ________, ________, ________, ________, KC_P4   , KC_P5   , KC_P6   , ________, ________, ________, ________, ________,
        /**/ ________, ________, ________, ________, ________, ________, ________, KC_P1   , KC_P2   , KC_P3   , ________, ________, ________,           ________,
        /**/           ________, ________, ________, ________, ________, ________, KC_P0   , KC_PDOT , KC_NUM  , ________, ________, ________, ________, ________,
        /**/           ________,           ________, ________,           ________, ________,                     ________,                     ________
    )
};

static bool lower_pressed = false;
static bool raise_pressed = false;
static bool altab_pressed = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LOWER:
            if(record->event.pressed) {
                lower_pressed = true;

                layer_on(KL_LOWER);
                update_tri_layer(KL_LOWER, KL_RAISE, KL_ADJUST);

            } else {
                layer_off(KL_LOWER);
                update_tri_layer(KL_LOWER, KL_RAISE, KL_ADJUST);

                if(altab_pressed) {
                    unregister_code(KC_LALT); 
                }
                altab_pressed = false; 

                if(lower_pressed) {
                    register_code(KC_SPC);
                    unregister_code(KC_SPC);
                }
                lower_pressed = false;
            }
            return false;
            break;

        case RAISE:
            if(record->event.pressed) {
                raise_pressed = true;

                layer_on(KL_RAISE);
                update_tri_layer(KL_LOWER, KL_RAISE, KL_ADJUST);

            } else {
                layer_off(KL_RAISE);
                update_tri_layer(KL_LOWER, KL_RAISE, KL_ADJUST);

                if(raise_pressed) {
                    register_code(KC_ENT);
                    unregister_code(KC_ENT);
                }
                raise_pressed = false;
            }
            return false;
            break;

        case IME:
            if(record->event.pressed) {
                SEND_STRING(SS_LALT("`"));
                // reset the flag
                lower_pressed = false;
                raise_pressed = false;
            }
            break;

        case JIS:
            if(record->event.pressed) {
                user_config.is_jis_mode = !is_jis_mode();
                eeconfig_update_user(user_config.raw);
                // reset the flag
                lower_pressed = false;
                raise_pressed = false;
            }
            break; 

        case ALTAB:
            if(record->event.pressed) {
                altab_pressed = true;
                register_code(KC_LALT);
                tap_code(KC_TAB);
            }
            break;

        default:
            if(record->event.pressed) {
                // reset the flag
                lower_pressed = false;
                raise_pressed = false;
            }
            break;
    }

    if (!is_jis_mode()) {
        return true;
    }
    return process_record_user_a2j(keycode, record);
}

void keyboard_post_init_user(void) {
    init_user_config();
}