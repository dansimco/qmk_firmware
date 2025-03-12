/*
Copyright 2021 CapsUnlocked

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
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
             UG_TOGG,
    LALT(KC_F1),    LALT(KC_F2),    LALT(KC_F3),
    LALT(KC_F4),    LALT(KC_F5),    LALT(KC_F6)
  ),
  [1] = LAYOUT(
             _______,
    UG_NEXT, KC_UP,   QK_BOOT,
    KC_LEFT, KC_DOWN, KC_RGHT
  ),
};

// Volume up/down on the encoder
bool encoder_update_user(uint8_t index, bool clockwise) {
  if (clockwise) {
    tap_code16(LALT(KC_F9));
  }
  else {
    tap_code16(LALT(KC_F10));
  }

  return false;
}
