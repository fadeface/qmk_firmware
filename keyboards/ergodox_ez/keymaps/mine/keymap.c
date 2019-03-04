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
	J_ESC_H,
	J_IME_ON,
	J_IME_OFF,
    A_Lb,
    A_Ls1,
    A_Ls2,
    A_Lc1,
    A_IME_ON,
    A_IME_OFF,
	JIS_ANSI
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
			J_ESC_H,  JA_A,    JA_S,  JA_D,    JA_F,    JA_G,
			JA_ENT,  JA_Z,    JA_X,  JA_C,    JA_V,    JA_B,  JA_NO,
			JA_LALT, JA_DOWN, JA_UP, JA_LGUI, JA_LCTL,
														JA_NO,   JA_NO,
																 JA_NO,
												   J_Ls1, MK_LSFT, J_IME_OFF,

							JA_NO, JA_MHEN, JA_HOME, JA_END,  JA_PGUP, JA_PGDN, JIS_ANSI,
							JA_NO, JA_Y,    JA_U,    JA_I,    JA_O,    JA_P,    J_Lb,
							       JA_H,    JA_J,    JA_K,    JA_L,    JA_BSPC, JA_SPC,
							JA_NO, JA_N,    JA_M,    JA_MINS, JA_UNDS, JA_DEL,  JA_TAB,
											JA_LCTL, JA_RGUI, JA_LEFT, JA_RGHT, JA_LALT,
							JA_NO, JA_NO,
							JA_NO,
							J_IME_ON, MK_RSFT, J_Ls2),

	[_J_Ls1] = LAYOUT_ergodox(
			JA_F7,   JA_F8,   JA_F9,   JA_F10,  JA_F11,  JA_F12,  JA_NO,
			JA_TRNS, JA_AMPR, JA_7,   JA_8,   JA_9,   JA_LCBR, JA_NO,
			JA_TRNS, JA_0,   JA_4,   JA_5,   JA_6,   JA_GT,
			JA_TRNS, JA_DOT, JA_1,   JA_2,   JA_3,   JA_LBRC, JA_NO,
			JA_TRNS, JA_TRNS, JA_TRNS, JA_TRNS, JA_TRNS,
														 JA_NO, JA_NO,
												 				JA_NO,
											       J_Ls2, JA_TRNS, JA_NO,

							JA_NO, JA_TRNS, JA_TRNS, JA_TRNS, JA_TRNS, JA_TRNS, JA_TRNS,
							JA_NO, JA_RCBR, JA_BSLS, JA_DQT , JA_QUOT, JA_RPRN, JA_TRNS,
							       JA_DLR,	JA_TILD, JA_LPRN, JA_SLSH, JA_TRNS, JA_TRNS,
							JA_NO, JA_RBRC, JA_PIPE, JA_ASTR, JA_LT,   JA_TRNS, JA_TRNS,
											JA_TRNS, JA_TRNS, JA_TRNS, JA_TRNS, JA_TRNS,
							JA_NO, JA_NO,
							JA_NO,
							JA_NO, JA_TRNS, J_Lb),

	[_J_Ls2] = LAYOUT_ergodox(
			JA_F7,   JA_PSCR,   JA_INS,   JA_NLCK,  JA_APP,  JA_GRV,  JA_NO,
			JA_TRNS, JA_AT,   JA_7,   JA_8,   JA_9,   JA_LCBR, JA_NO,
			JA_TRNS, JA_0,   JA_4,   JA_5,   JA_6,   JA_EXLM,
			JA_TRNS, JA_COMM, JA_1,   JA_2,   JA_3,   JA_QUES, JA_NO,
			JA_TRNS, JA_TRNS, JA_TRNS, JA_TRNS, JA_TRNS,
														 JA_NO, JA_NO,
												 				JA_NO,
											       J_Lb, JA_TRNS, JA_NO,

							JA_NO, JA_TRNS, JA_TRNS, JA_TRNS, JA_TRNS, JA_TRNS, JA_TRNS,
							JA_NO, JA_RCBR, JA_BSLS, JA_DQT , JA_QUOT, JA_RPRN, JA_TRNS,
							       JA_CIRC, JA_EQL,  JA_LPRN, JA_COLN, JA_TRNS, JA_TRNS,
							JA_NO, JA_HASH, JA_SCLN, JA_PERC, JA_PLUS, JA_TRNS, JA_TRNS,
											JA_TRNS, JA_TRNS, JA_TRNS, JA_TRNS, JA_TRNS,
							JA_NO, JA_NO,
							JA_NO,
							JA_NO, JA_TRNS, J_Ls1),

	[_J_Lc1] = LAYOUT_ergodox(
		JA_NO     , JA_NO     , JA_NO     , JA_NO     , JA_NO     , JA_NO     , JA_NO     ,
		J_Lb      , JA_NO     , JA_NO     , JA_NO     , JA_NO     , JA_NO     , JA_NO     ,
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

//	[_A_Lb] = LAYOUT_ergodox(
//			KC_F1,   KC_F2,   KC_F3, KC_F4,   KC_F5,   KC_F6, KC_NO,
//			A_Lc1,     KC_Q,    KC_W,  KC_E,    KC_R,    KC_T,  KC_NO,
//			KC_ESC,  KC_A,    KC_S,  KC_D,    KC_F,    KC_G,
//			KC_ENT,  KC_Z,    KC_X,  KC_C,    KC_V,    KC_B,  KC_NO,
//			KC_LALT, KC_DOWN, KC_UP, KC_LGUI, KC_LCTL,
//													 KC_NO,   KC_NO,
//															KC_NO,
//										    A_Ls1, MK_LSFT, KC_NO,
//
//							KC_NO, JIS,     KC_HOME, KC_END,  KC_PGUP, KC_PGDN, ANSI,
//							KC_NO, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_NO,
//							       KC_H,    KC_J,    KC_K,    KC_L,    KC_BSPC, KC_SPC,
//							KC_NO, KC_N,    KC_M,    KC_LEFT, KC_RGHT, KC_DEL,  KC_TAB,
//								          KC_LCTL, KC_RGUI, KC_MINS, KC_UNDS, KC_LALT,
//							KC_NO, KC_NO,
//							KC_NO,
//							KC_NO, MK_RSFT, A_Ls2),
//
//	[_A_Ls1] = LAYOUT_ergodox(
//			KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NO,
//			KC_TRNS, KC_AMPR, KC_7,   KC_8,   KC_9,   KC_LCBR, KC_NO,
//			KC_TRNS, KC_0,   KC_4,   KC_5,   KC_6,   KC_TILD,
//			KC_TRNS, KC_PDOT, KC_1,   KC_2,   KC_3,   KC_LBRC, KC_NO,
//			KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
//														 KC_NO, KC_NO,
//												 				KC_NO,
//											       A_Ls2, KC_TRNS, KC_NO,
//
//							KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
//							KC_NO, KC_RCBR, KC_BSLS, KC_DQUO, KC_QUOT, KC_RPRN, KC_TRNS,
//							       KC_GT,   KC_EQL,  KC_LPRN, KC_SLSH, KC_TRNS, KC_TRNS,
//							KC_NO, KC_RBRC, KC_PIPE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
//											KC_TRNS, KC_TRNS, KC_COMM, KC_MINS, KC_TRNS,
//							KC_NO, KC_NO,
//							KC_NO,
//							KC_NO, KC_TRNS, A_Lb),
//
//	[_A_Ls2] = LAYOUT_ergodox(
//			KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NO,
//			KC_TRNS, KC_AT,   KC_7,   KC_8,   KC_9,   KC_LCBR, KC_NO,
//			KC_TRNS, KC_0,   KC_4,   KC_5,   KC_6,   KC_EXLM,
//			KC_TRNS, KC_COMM, KC_1,   KC_2,   KC_3,   KC_LBRC, KC_NO,
//			KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
//														 KC_NO, KC_NO,
//												 				KC_NO,
//											       A_Lb, KC_TRNS, KC_NO,
//
//							KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
//							KC_NO, KC_RCBR, KC_BSLS, KC_DQUO, KC_QUOT, KC_RPRN, KC_TRNS,
//							       KC_HASH, KC_CIRC, KC_LPRN, KC_COLN, KC_TRNS, KC_TRNS,
//							KC_NO, KC_RBRC, KC_SCLN, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
//											KC_TRNS, KC_TRNS, KC_COMM, KC_MINS, KC_TRNS,
//							KC_NO, KC_NO,
//							KC_NO,
//							KC_NO, KC_TRNS, A_Ls1),
//
//	[_A_Lc1] = LAYOUT_ergodox(
//		KC_NO     , KC_NO     , KC_NO     , KC_NO     , KC_NO     , KC_NO     , KC_NO     ,
//		A_Lb        , KC_NO     , KC_NO     , KC_NO     , KC_NO     , KC_NO     , KC_NO     ,
//		KC_TRNS   , KC_NO     , KC_NO     , KC_NO     , KC_NO     , KC_NO     ,
//		KC_TRNS   , KC_NO     , KC_NO     , KC_NO     , KC_NO     , KC_NO     , KC_NO     ,
//		KC_NO     , KC_NO     , KC_NO     , KC_NO     , KC_NO     ,
//        	                                                        KC_NO     , KC_NO     ,
//        	                                                                    KC_NO     ,
//		                                                KC_NO     , KC_NO     , KC_NO     ,
//
//								A_Lb,A_Lb,A_Lb,A_Lb,A_Lb,A_Lb,A_Lb,
//								A_Lb,A_Lb,A_Lb,A_Lb,A_Lb,A_Lb,A_Lb,
//								     A_Lb,A_Lb,A_Lb,A_Lb,A_Lb,A_Lb,
//								A_Lb,A_Lb,A_Lb,A_Lb,A_Lb,A_Lb,A_Lb,
//								          A_Lb,A_Lb,A_Lb,A_Lb,A_Lb,
//								A_Lb,A_Lb,
//								A_Lb,
//								A_Lb,A_Lb,A_Lb)
};
//@formatter:on
void ime_off_j(void);
void ime_on_j(void);

bool is_ime_on_j;

void ime_off_j(){
    // X_INT2 = X_KANA  IME on
    SEND_STRING(SS_TAP(X_INT2));
    // X_GRAVE = X_ZHTG IME toggle = off
    SEND_STRING(SS_TAP(X_GRAVE));
    is_ime_on_j = false;
}
void ime_on_j(){
    // X_INT2 = X_KANA  IME on
    SEND_STRING(SS_TAP(X_INT2));
    is_ime_on_j = true;
}
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	static bool is_lsft_on = false;
	static bool is_rsft_on = false;
//	static bool is_jis_on = true;
    switch (keycode) {
        // dynamically generate these.
		case MK_LSFT:
			if (record->event.pressed) {
				SEND_STRING(SS_DOWN(X_LSHIFT));
				if (is_rsft_on) {
                    ime_on_j();
				}
				is_lsft_on = true;
			}
			else {
				SEND_STRING(SS_UP(X_LSHIFT));
				is_lsft_on = false;
			}
			return false;
		case MK_RSFT:
			if (record->event.pressed) {
				SEND_STRING(SS_DOWN(X_RSHIFT));
                if (is_lsft_on) {
                    ime_on_j();
                }
				is_rsft_on = true;
			}
			else {
				SEND_STRING(SS_UP(X_RSHIFT));
				is_rsft_on = false;
			}
			return false;
        case J_Lb:
            if (record->event.pressed) {
                if (is_lsft_on || is_rsft_on) {
                    ime_on_j();
                }
                else {
                    ime_off_j();
                }
                layer_state_set(1UL<<_J_Lb);
            }
            return false;
		case J_Ls1:
			if (record->event.pressed) {
                if (is_lsft_on || is_rsft_on) {
                    ime_on_j();
                }
                else {
                    ime_off_j();
                }
				layer_state_set(1UL<<_J_Ls1);
			}
			return false;
		case J_Ls2:
			if (record->event.pressed) {
                if (is_lsft_on || is_rsft_on) {
                    ime_on_j();
                }
                else {
                    ime_off_j();
                }
				layer_state_set(1UL<<_J_Ls2);
			}
			return false;
		case J_Lc1:
			if (record->event.pressed) {
                if (is_lsft_on || is_rsft_on) {
                    ime_on_j();
                }
                else {
                    ime_off_j();
                }
				layer_state_set(1UL<<_J_Lc1);
			}
			return false;
        case J_ESC_H:
            if (record->event.pressed) {
                if (is_ime_on_j) {
                    SEND_STRING(SS_TAP(X_INT4));
                }
                else {
                    SEND_STRING(SS_TAP(X_ESCAPE));
                }
            }
            return false;
		case J_IME_ON:
			if (record->event.pressed) {
				ime_on_j();
			}
			return false;
		case J_IME_OFF:
			if (record->event.pressed) {
				ime_off_j();
			}
			return false;
    }
    return true;
}

uint32_t layer_state_set_user(uint32_t state) {
	ergodox_board_led_off();
	ergodox_right_led_1_off();
	ergodox_right_led_2_off();
	ergodox_right_led_3_off();

	uint8_t layer = biton32(state);
	switch (layer) {
		case 0:
#ifdef RGBLIGHT_COLOR_LAYER_0
			rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
#else
#ifdef RGBLIGHT_ENABLE
			rgblight_init();
#endif
#endif
			break;
		case 1:
			ergodox_right_led_3_on();
#ifdef RGBLIGHT_COLOR_LAYER_1
			rgblight_setrgb(RGBLIGHT_COLOR_LAYER_1);
#endif
			break;
		case 2:
			ergodox_right_led_2_on();
#ifdef RGBLIGHT_COLOR_LAYER_2
			rgblight_setrgb(RGBLIGHT_COLOR_LAYER_2);
#endif
			break;
		case 3:
            ergodox_right_led_2_on();
			ergodox_right_led_3_on();
#ifdef RGBLIGHT_COLOR_LAYER_3
			rgblight_setrgb(RGBLIGHT_COLOR_LAYER_3);
#endif
			break;
		case 4:
			ergodox_right_led_1_on();
#ifdef RGBLIGHT_COLOR_LAYER_4
			rgblight_setrgb(RGBLIGHT_COLOR_LAYER_4);
#endif
			break;
		case 5:
			ergodox_right_led_1_on();
			ergodox_right_led_3_on();
#ifdef RGBLIGHT_COLOR_LAYER_5
			rgblight_setrgb(RGBLIGHT_COLOR_LAYER_5);
#endif
			break;
		case 6:
			ergodox_right_led_2_on();
			ergodox_right_led_3_on();
#ifdef RGBLIGHT_COLOR_LAYER_6
			rgblight_setrgb(RGBLIGHT_COLOR_LAYER_6);
#endif
			break;
		case 7:
			ergodox_right_led_1_on();
			ergodox_right_led_2_on();
			ergodox_right_led_3_on();
#ifdef RGBLIGHT_COLOR_LAYER_7
			rgblight_setrgb(RGBLIGHT_COLOR_LAYER_7);
#endif
			break;
		default:
			break;
	}

	return state;
}