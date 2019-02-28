#include QMK_KEYBOARD_H
#include "debug.h"
#include "action_layer.h"
#include "version.h"
#include "keymap_JIS.h"

enum custom_keycodes {
    MK_LSFT = SAFE_RANGE,
    MK_RSFT,
    J_Lb,
	J_Ls1,
	J_Ls2,
	J_Lc1,
	J_IME_ON,
	J_IME_OFF,
    A_Lb,
    A_Ls1,
    A_Ls2,
    A_Lc1,
    A_IME_ON,
    A_IME_OFF,
	JIS,
	ANSI,
};

#define _J_Lb  0
#define _J_Ls1 1
#define _J_Ls2 2
#define _J_Lc1 3
#define _A_Lb  4
#define _A_Ls1 5
#define _A_Ls2 6
#define _A_Lc1 7

//@formatter:off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_J_Lb] = LAYOUT_ergodox(
			JA_F1,   JA_F2,   JA_F3, JA_F4,   JA_F5,   JA_F6, JA_NO,
			J_Lc1,     JA_Q,    JA_W,  JA_E,    JA_R,    JA_T,  JA_NO,
			JA_ESC,  JA_A,    JA_S,  JA_D,    JA_F,    JA_G,
			JA_ENT,  JA_Z,    JA_X,  JA_C,    JA_V,    JA_B,  JA_NO,
			JA_LALT, JA_DOWN, JA_UP, JA_LGUI, JA_LCTL,
														JA_NO,   JA_NO,
																 JA_NO,
												   J_Ls1, MK_LSFT, J_IME_OFF,

							JA_NO, JIS,     JA_HOME, JA_END,  JA_PGUP, JA_PGDN, ANSI,
							JA_NO, JA_Y,    JA_U,    JA_I,    JA_O,    JA_P,    J_Lb,
							       JA_H,    JA_J,    JA_K,    JA_L,    JA_BSPC, JA_SPC,
							JA_NO, JA_N,    JA_M,    JA_LEFT, JA_RGHT, JA_DEL,  JA_TAB,
											JA_LCTL, JA_RGUI, JA_MINS, JA_UNDS, JA_LALT,
							JA_NO, JA_NO,
							JA_NO,
							J_IME_ON, MK_RSFT, J_Ls2),

	[_J_Ls1] = LAYOUT_ergodox(
			JA_F7,   JA_F8,   JA_F9,   JA_F10,  JA_F11,  JA_F12,  JA_NO,
			JA_TRNS, JA_AMPR, JA_P7,   JA_P8,   JA_P9,   JA_LCBR, JA_NO,
			JA_TRNS, JA_P0,   JA_P4,   JA_P5,   JA_P6,   JA_TILD,
			JA_TRNS, JA_PDOT, JA_P1,   JA_P2,   JA_P3,   JA_LBRC, JA_NO,
			JA_TRNS, JA_TRNS, JA_TRNS, JA_TRNS, JA_TRNS,
														 JA_NO, JA_NO,
												 				JA_NO,
											       J_Ls2, JA_TRNS, JA_NO,

							JA_NO, JA_TRNS, JA_TRNS, JA_TRNS, JA_TRNS, JA_TRNS, JA_TRNS,
							JA_NO, JA_RCBR, JA_BSLS, JA_DQT , JA_QUOT, JA_RPRN, JA_TRNS,
							       JA_GT,   JA_EQL,  JA_LPRN, JA_SLSH, JA_TRNS, JA_TRNS,
							JA_NO, JA_RBRC, JA_PIPE, JA_TRNS, JA_TRNS, JA_TRNS, JA_TRNS,
											JA_TRNS, JA_TRNS, JA_COMM, JA_MINS, JA_TRNS,
							JA_NO, JA_NO,
							JA_NO,
							JA_NO, JA_TRNS, J_Lb),

	[_J_Ls2] = LAYOUT_ergodox(
			JA_F7,   JA_F8,   JA_F9,   JA_F10,  JA_F11,  JA_F12,  JA_NO,
			JA_TRNS, JA_AT,   JA_P7,   JA_P8,   JA_P9,   JA_LCBR, JA_NO,
			JA_TRNS, JA_P0,   JA_P4,   JA_P5,   JA_P6,   JA_EXLM,
			JA_TRNS, JA_COMM, JA_P1,   JA_P2,   JA_P3,   JA_LBRC, JA_NO,
			JA_TRNS, JA_TRNS, JA_TRNS, JA_TRNS, JA_TRNS,
														 JA_NO, JA_NO,
												 				JA_NO,
											       J_Lb, JA_TRNS, JA_NO,

							JA_NO, JA_TRNS, JA_TRNS, JA_TRNS, JA_TRNS, JA_TRNS, JA_TRNS,
							JA_NO, JA_RCBR, JA_BSLS, JA_DQT , JA_QUOT, JA_RPRN, JA_TRNS,
							       JA_HASH, JA_CIRC, JA_LPRN, JA_COLN, JA_TRNS, JA_TRNS,
							JA_NO, JA_RBRC, JA_SCLN, JA_TRNS, JA_TRNS, JA_TRNS, JA_TRNS,
											JA_TRNS, JA_TRNS, JA_COMM, JA_MINS, JA_TRNS,
							JA_NO, JA_NO,
							JA_NO,
							JA_NO, JA_TRNS, J_Ls1),

	[_J_Lc1] = LAYOUT_ergodox(
		JA_NO     , JA_NO     , JA_NO     , JA_NO     , JA_NO     , JA_NO     , JA_NO     ,
		J_Lb        , JA_NO     , JA_NO     , JA_NO     , JA_NO     , JA_NO     , JA_NO     ,
		JA_TRNS   , JA_NO     , JA_NO     , JA_NO     , JA_NO     , JA_NO     ,
		JA_TRNS   , JA_NO     , JA_NO     , JA_NO     , JA_NO     , JA_NO     , JA_NO     ,
		JA_NO     , JA_NO     , JA_NO     , JA_NO     , JA_NO     ,
                                                                JA_NO     , JA_NO     ,
                                                                            JA_NO     ,
		                                                JA_NO     , JA_NO     , JA_NO     ,

								J_Lb,J_Lb,J_Lb,J_Lb,J_Lb,J_Lb,J_Lb,
								J_Lb,J_Lb,J_Lb,J_Lb,J_Lb,J_Lb,J_Lb,
								     J_Lb,J_Lb,J_Lb,J_Lb,J_Lb,J_Lb,
								J_Lb,J_Lb,J_Lb,J_Lb,J_Lb,J_Lb,J_Lb,
								     J_Lb,J_Lb,J_Lb,J_Lb,J_Lb,
								J_Lb,J_Lb,
								J_Lb,
								J_Lb,J_Lb,J_Lb),

	[_A_Lb] = LAYOUT_ergodox(
			KC_F1,   KC_F2,   KC_F3, KC_F4,   KC_F5,   KC_F6, KC_NO,
			A_Lc1,     KC_Q,    KC_W,  KC_E,    KC_R,    KC_T,  KC_NO,
			KC_ESC,  KC_A,    KC_S,  KC_D,    KC_F,    KC_G,
			KC_ENT,  KC_Z,    KC_X,  KC_C,    KC_V,    KC_B,  KC_NO,
			KC_LALT, KC_DOWN, KC_UP, KC_LGUI, KC_LCTL,
													 KC_NO,   KC_NO,
															KC_NO,
										    A_Ls1, MK_LSFT, KC_NO,

							KC_NO, JIS,     KC_HOME, KC_END,  KC_PGUP, KC_PGDN, ANSI,
							KC_NO, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_NO,
							       KC_H,    KC_J,    KC_K,    KC_L,    KC_BSPC, KC_SPC,
							KC_NO, KC_N,    KC_M,    KC_LEFT, KC_RGHT, KC_DEL,  KC_TAB,
								          KC_LCTL, KC_RGUI, KC_MINS, KC_UNDS, KC_LALT,
							KC_NO, KC_NO,
							KC_NO,
							KC_NO, MK_RSFT, A_Ls2),

	[_A_Ls1] = LAYOUT_ergodox(
			KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NO,
			KC_TRNS, KC_AMPR, KC_P7,   KC_P8,   KC_P9,   KC_LCBR, KC_NO,
			KC_TRNS, KC_P0,   KC_P4,   KC_P5,   KC_P6,   KC_TILD,
			KC_TRNS, KC_PDOT, KC_P1,   KC_P2,   KC_P3,   KC_LBRC, KC_NO,
			KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
														 KC_NO, KC_NO,
												 				KC_NO,
											       A_Ls2, KC_TRNS, KC_NO,

							KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
							KC_NO, KC_RCBR, KC_BSLS, KC_DQUO, KC_QUOT, KC_RPRN, KC_TRNS,
							       KC_GT,   KC_EQL,  KC_LPRN, KC_SLSH, KC_TRNS, KC_TRNS,
							KC_NO, KC_RBRC, KC_PIPE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
											KC_TRNS, KC_TRNS, KC_COMM, KC_MINS, KC_TRNS,
							KC_NO, KC_NO,
							KC_NO,
							KC_NO, KC_TRNS, A_Lb),

	[_A_Ls2] = LAYOUT_ergodox(
			KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NO,
			KC_TRNS, KC_AT,   KC_P7,   KC_P8,   KC_P9,   KC_LCBR, KC_NO,
			KC_TRNS, KC_P0,   KC_P4,   KC_P5,   KC_P6,   KC_EXLM,
			KC_TRNS, KC_COMM, KC_P1,   KC_P2,   KC_P3,   KC_LBRC, KC_NO,
			KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
														 KC_NO, KC_NO,
												 				KC_NO,
											       A_Lb, KC_TRNS, KC_NO,

							KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
							KC_NO, KC_RCBR, KC_BSLS, KC_DQUO, KC_QUOT, KC_RPRN, KC_TRNS,
							       KC_HASH, KC_CIRC, KC_LPRN, KC_COLN, KC_TRNS, KC_TRNS,
							KC_NO, KC_RBRC, KC_SCLN, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
											KC_TRNS, KC_TRNS, KC_COMM, KC_MINS, KC_TRNS,
							KC_NO, KC_NO,
							KC_NO,
							KC_NO, KC_TRNS, A_Ls1),

	[_A_Lc1] = LAYOUT_ergodox(
		KC_NO     , KC_NO     , KC_NO     , KC_NO     , KC_NO     , KC_NO     , KC_NO     ,
		A_Lb        , KC_NO     , KC_NO     , KC_NO     , KC_NO     , KC_NO     , KC_NO     ,
		KC_TRNS   , KC_NO     , KC_NO     , KC_NO     , KC_NO     , KC_NO     ,
		KC_TRNS   , KC_NO     , KC_NO     , KC_NO     , KC_NO     , KC_NO     , KC_NO     ,
		KC_NO     , KC_NO     , KC_NO     , KC_NO     , KC_NO     ,
        	                                                        KC_NO     , KC_NO     ,
        	                                                                    KC_NO     ,
		                                                KC_NO     , KC_NO     , KC_NO     ,

								A_Lb,A_Lb,A_Lb,A_Lb,A_Lb,A_Lb,A_Lb,
								A_Lb,A_Lb,A_Lb,A_Lb,A_Lb,A_Lb,A_Lb,
								     A_Lb,A_Lb,A_Lb,A_Lb,A_Lb,A_Lb,
								A_Lb,A_Lb,A_Lb,A_Lb,A_Lb,A_Lb,A_Lb,
								          A_Lb,A_Lb,A_Lb,A_Lb,A_Lb,
								A_Lb,A_Lb,
								A_Lb,
								A_Lb,A_Lb,A_Lb)
};
//@formatter:on
void ime_off_j(void);
void ime_on_j(void);

void ime_off_j(){
    // X_INT2 = X_KANA  IME on
    SEND_STRING(SS_TAP(X_INT2));
    // X_GRAVE = X_ZHTG IME toggle = off
    SEND_STRING(SS_TAP(X_GRAVE));
}
void ime_on_j(){
    // X_INT2 = X_KANA  IME on
    SEND_STRING(SS_TAP(X_INT2));
}
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//	static bool is_ime_on_j = false;
//	static bool is_lsft_on = false;
//	static bool is_rsft_on = false;
//	static bool is_jis_on = true;
    switch (keycode) {
        // dynamically generate these.
		case MK_LSFT:
			if (record->event.pressed) {
				SEND_STRING(SS_DOWN(X_LSHIFT));
//				is_lsft_on = true;
			}
			else {
				SEND_STRING(SS_UP(X_LSHIFT));
//				is_lsft_on = false;
			}
			return false;
		case MK_RSFT:
			if (record->event.pressed) {
				SEND_STRING(SS_DOWN(X_RSHIFT));
//				is_rsft_on = true;
			}
			else {
				SEND_STRING(SS_UP(X_RSHIFT));
//				is_rsft_on = false;
			}
			return false;
        case J_Lb:
            if (record->event.pressed) {
                layer_state_set(1UL<<_J_Lb);
            }
            return false;
		case J_Ls1:
			if (record->event.pressed) {
				layer_state_set(1UL<<_J_Ls1);
			}
			return false;
		case J_Ls2:
			if (record->event.pressed) {
				layer_state_set(1UL<<_J_Ls2);
			}
			return false;
		case J_Lc1:
			if (record->event.pressed) {
				layer_state_set(1UL<<_J_Lc1);
			}
			return false;
		case J_IME_ON:
			if (record->event.pressed) {
				ime_on_j();
//				is_ime_on_j = true;
			}
			return false;
		case J_IME_OFF:
			if (record->event.pressed) {
				ime_off_j();
//				is_ime_on_j = false;
			}
			return false;
    }
    return true;
}