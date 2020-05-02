#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	               K03, \
	K10, K11, K12, K13, \
	     K21,      K23  \
) { \
	{ KC_NO, KC_NO, KC_NO, K03 }, \
	{ K10,   K11,   K12,   K13 }, \
	{ KC_NO, K21,   KC_NO, K23 }  \
}

#endif