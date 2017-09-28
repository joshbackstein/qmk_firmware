// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include "atreus62.h"

/*
		Keymap:
		{ KC_ESC,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_TRNS,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS },
		{ KC_BSLS,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_TRNS,  KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_RBRC },
		{ KC_TAB,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_TRNS,  KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT },
		{ KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_DELT,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_LBRC },
		{ KC_LCTL,  KC_LGUI, KC_LALT, KC_GRV,  MO(_NAV),KC_BSPC, KC_ENT,   KC_SPC,  KC_EQL,  KC_MINS, KC_QUOT, KC_ENT,  KC_RGUI }

		Layout:
		{ ESC    1      2      3     4          5                    6     7     8     9     0     MINS }
		{ BSLS   Q      W      E     R          T                    Y     U     I     O     P     RBRC }
		{ TAB    A      S      D     F          G                    H     J     K     L     SCLN  QUOT }
		{ LSFT   Z      X      C     V          B                    N     M     COMM  DOT   SLSH  LBRC }
		{ LCTL   LGUI   LALT   GRV   MO(_NAV)   BSPC   DELT   ENT    SPC   EQL   MINS  QUOT  ENT   RGUI }
*/

// We need an enum so we can use custom keycodes.
enum custom_keycodes {
  PLACEHOLDER = SAFE_RANGE,
  // Reset guards.
  RG_LEFT,
  RG_RGHT
};

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _DEFAULT 0
#define _FN 1
#define _LAYER_STOP 2
#define _LAYERS 3
#define _NAV 4
#define _RESET 5

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
[_DEFAULT] = { // qwerty
		{ KC_ESC,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_TRNS,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS },
		{ KC_BSLS,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_TRNS,  KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_RBRC },
		{ KC_TAB,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_TRNS,  KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT },
		{ KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_DELT,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_LBRC },
		{ KC_LCTL,  KC_LGUI, KC_LALT, KC_GRV,  MO(_NAV),KC_BSPC, KC_ENT,   KC_SPC,  KC_EQL,  KC_MINS, KC_QUOT, KC_ENT,  KC_RGUI }
},
*/

[_DEFAULT] = { // qwerty
		{ KC_GRV,      KC_1,    KC_2,    KC_3,    KC_4,    KC_5,       KC_TRNS,    KC_6,   KC_7,    KC_8,    KC_9,    KC_0,    KC_MUTE },
		{ KC_TAB,      KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,       KC_TRNS,    KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS },
		{ MO(_FN),     KC_A,    KC_S,    KC_D,    KC_F,    KC_G,       KC_TRNS,    KC_H,   KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT },
		{ KC_MINS,     KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,       KC_BSPC,    KC_N,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_EQL },
		{ TO(_LAYERS), KC_LBRC, KC_RBRC, KC_LGUI, KC_LSFT, KC_LCTL,    KC_ENT,     KC_SPC, KC_RSFT, MO(_FN), KC_PGUP, KC_PGDN, KC_LALT }
},

[_FN] = {
		{ KC_ESC,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_VOLD, KC_VOLU },
		{ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS },
		{ KC_TRNS, KC_LALT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,    KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_TRNS, KC_TRNS },
		{ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_DELT,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS },
		{ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_END,  KC_TRNS }
},

[_LAYER_STOP] = {
		{ KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO },
		{ KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO },
		{ KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO },
		{ KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO },
		{ KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO }
},

[_LAYERS] = {
		{ TO(_DEFAULT),  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS },
		{ TO(_NAV),      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS },
		{ KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS },
		{ MO(_RESET),    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    RG_LEFT,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS },
		{ TO(_RESET),    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    RG_RGHT,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS }
},

[_NAV] = {
		{ TO(_DEFAULT),  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,      KC_TRNS,    KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11  },
		{ KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,    KC_F12,  KC_TRNS, KC_UP,   KC_TRNS, KC_TRNS, KC_TRNS },
		{ KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS },
		{ KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS },
		{ KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS }
},

[_RESET] = {
		{ TO(_DEFAULT),  KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,  KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO   },
		{ KC_NO  ,       KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,  KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO   },
		// The A key in the QWERTY layout is replaced with an O key to make it easier to tell if the reset layer is active.
		{ KC_NO  ,       KC_O   , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,  KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO   },
		{ KC_NO  ,       KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,  KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO   },
		{ KC_NO  ,       KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,  KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , RESET }
}


/*
[_TRNS] = {
		{ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS },
		{ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS },
		{ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS },
		{ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS },
		{ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS }
},
*/
};



const uint16_t PROGMEM fn_actions[] = {

};

// Flags indicating whether the right and left reset guard
// keys are pressed.
bool reset_guard_left_pressed = false;
bool reset_guard_right_pressed = false;

// Called every time a key is pressed or released. The return
// value is whether or not QMK should continue processing the
// keycode. Returning false stops the execution/keycode from
// being processed.
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case RG_LEFT:
      if (record->event.pressed) {
        reset_guard_left_pressed = true;
      } else {
        reset_guard_left_pressed = false;
      }
      break;
    case RG_RGHT:
      if (record->event.pressed) {
        reset_guard_right_pressed = true;
      } else {
        reset_guard_right_pressed = false;
      }
      break;
    case TO(_RESET):
      if (record->event.pressed) {
        // Both reset guards must be pressed to get to the reset
        // layer.
        if (!reset_guard_left_pressed || !reset_guard_right_pressed) {
          return false;
        }
      }
      break;
  }

  // Process every keycode by default.
  return true;
}

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
	// MACRODOWN only works in this function
	switch (id) {
	case 0:
		if (record->event.pressed) {
			register_code(KC_RSFT);
		}
		else {
			unregister_code(KC_RSFT);
		}
		break;
	}
	return MACRO_NONE;
};
