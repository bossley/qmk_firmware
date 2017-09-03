/* Copyright 2017 REPLACE_WITH_YOUR_NAME
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
#ifndef M0110_H
#define M0110_H

#ifdef SUBPROJECT_teensy
  #include "teensy.h"
#endif
#ifdef SUBPROJECT_feather
  #include "feather.h"
#endif

#include "quantum.h"

// This a shortcut to help you visually see your layout.
// The following is an example using the Planck MIT layout
// The first section contains all of the arguments
// The second converts the arguments into a two-dimensional array
#define KEYMAP( \
   k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k010, k011, k012, k013, \
   k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k110, k111, k112, k113, \
   k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k210, k211, k212, \
   k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k310, k311, \
   k40, k41, k42, k43, k44, k45, k46 \
) \
{ \
    { k00, k01, k02, k03,   k04,   k05, k06,   k07,   k08,   k09, k010, k011,  k012, k013 }, \
    { k10, k11, k12, k13,   k14,   k15, k16,   k17,   k18,   k19, k110, k111,  k112, k113 }, \
    { k20, k21, k22, k23,   k24,   k25, k26,   k27,   k28,   k29, k210, k211,  k212, KC_NO }, \
    { k30, k31, k32, k33,   k34,   k35, k36,   k37,   k38,   k39, k310, KC_NO, k311, KC_NO }, \
    { k40, k41, k42, KC_NO, KC_NO, k43, KC_NO, KC_NO, KC_NO, k44, k45,  KC_NO, k46,  KC_NO } \
}

#endif
