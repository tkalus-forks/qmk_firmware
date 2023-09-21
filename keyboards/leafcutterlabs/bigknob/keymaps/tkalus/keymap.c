/* Copyright 2021 Craig Gardner
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

#define _MAIN 0

enum {
    TD_F18_F17,
};

tap_dance_action_t tap_dance_actions[] = {
    [TD_F18_F17] = ACTION_TAP_DANCE_DOUBLE(KC_F18, KC_F17)
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_F20);
        } else {
            tap_code(KC_F19);
        }
    }
    return false;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = { // button closest to USB is first
    [_MAIN] = LAYOUT(
        TD(TD_F18_F17),
        KC_MEDIA_NEXT_TRACK,
        KC_MEDIA_PLAY_PAUSE,
        RSFT(KC_F16),
        KC_F16
    )
};
