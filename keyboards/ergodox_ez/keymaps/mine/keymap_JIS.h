//JIS Symbol Key
#define JA_MINS KC_MINS // -
#define JA_CIRC KC_EQL  // ^
#define JA_JYEN KC_JYEN // \     .
#define JA_AT   KC_LBRC // @
#define JA_LBRC KC_RBRC // [
#define JA_SCLN KC_SCLN // ;
#define JA_COLN KC_QUOT // :
#define JA_RBRC KC_BSLS // ]
#define JA_COMM KC_COMM // ,
#define JA_DOT  KC_DOT  // .
#define JA_SLSH KC_SLSH // /
#define JA_BSLS 0x87    // \     .
 // same
#define JA_LT   KC_LT   // <
#define JA_GT   KC_GT   // >


//JIS Shifted key
#define JA_DQT  KC_AT   // "
#define JA_AMPR KC_CIRC // &
#define JA_QUOT KC_AMPR // '
#define JA_LPRN KC_ASTR // (
#define JA_RPRN KC_LPRN // )
#define JA_EQL  KC_UNDS // =
#define JA_TILD KC_PLUS // ~
#define JA_GRV  KC_LCBR // `
#define JA_LCBR KC_RCBR // {
#define JA_PLUS KC_COLN // +
#define JA_ASTR KC_DQT  // *
#define JA_RCBR KC_PIPE // }
#define JA_PIPE S(KC_JYEN) // |
#define JA_UNDS S(KC_RO) // _
 // same
#define JA_EXLM KC_EXLM // !
#define JA_HASH KC_HASH // #
#define JA_DLR  KC_DLR  // $
#define JA_PERC KC_PERC // %
#define JA_QUES KC_QUES // ?

// for Mac


#define KC_KANA_MAC KC_LANG1 // MAC kana key
#define KC_EISU_MAC KC_LANG2 // MAC eisu key


/////// same keycodes between JIS and ANSI ////////
/* Transparent */
#define JA_TRNS KC_TRNS

/* Lock Keys */
#define JA_CLCK KC_CLCK
#define JA_CAPS KC_CAPS
#define JA_SLCK KC_SLCK
#define JA_NLCK KC_NLCK
#define JA_LCAP KC_LCAP
#define JA_LNUM KC_LNUM
#define JA_LSCR KC_LSCR

/* Commands */
#define JA_PSCR KC_PSCR
#define JA_PAUS KC_PAUS
#define JA_BRK  KC_BRK 
#define JA_INS  KC_INS 
#define JA_DEL  KC_DEL 
#define JA_PGDN KC_PGDN
#define JA_RGHT KC_RGHT
#define JA_APP  KC_APP 
#define JA_EXEC KC_EXEC
#define JA_SLCT KC_SLCT
#define JA_AGIN KC_AGIN
#define JA_PSTE KC_PSTE
#define JA_ERAS KC_ERAS
#define JA_CLR  KC_CLR 

/* Keypad */
#define JA_PSLS KC_PSLS
#define JA_PAST KC_PAST
#define JA_PMNS KC_PMNS
#define JA_PPLS KC_PPLS
#define JA_PENT KC_PENT
#define JA_P1   KC_P1  
#define JA_P2   KC_P2  
#define JA_P3   KC_P3  
#define JA_P4   KC_P4  
#define JA_P5   KC_P5  
#define JA_P6   KC_P6  
#define JA_P7   KC_P7  
#define JA_P8   KC_P8  
#define JA_P9   KC_P9  
#define JA_P0   KC_P0  
#define JA_PDOT KC_PDOT
#define JA_PEQL KC_PEQL
#define JA_PCMM KC_PCMM

/* Japanese specific */
#define JA_ZKHK KC_ZKHK
#define JA_RO   KC_RO  
#define JA_KANA KC_KANA
#define JA_JYEN KC_JYEN
#define JA_HENK KC_HENK
#define JA_MHEN KC_MHEN

/* Korean specific */
#define JA_HAEN KC_HAEN
#define JA_HANJ KC_HANJ

/* Modifiers */
#define JA_LCTL KC_LCTL
#define JA_LSFT KC_LSFT
#define JA_LCMD KC_LCMD
#define JA_LWIN KC_LWIN
#define JA_RCTL KC_RCTL
#define JA_RSFT KC_RSFT
#define JA_ALGR KC_ALGR
#define JA_RCMD KC_RCMD
#define JA_RWIN KC_RWIN

/* Generic Desktop Page (0x01) */
#define JA_PWR  KC_PWR 
#define JA_SLEP KC_SLEP
#define JA_WAKE KC_WAKE

/* Consumer Page (0x0C) */
#define JA_MUTE KC_MUTE
#define JA_VOLU KC_VOLU
#define JA_VOLD KC_VOLD
#define JA_MNXT KC_MNXT
#define JA_MPRV KC_MPRV
#define JA_MSTP KC_MSTP
#define JA_MPLY KC_MPLY
#define JA_MSEL KC_MSEL
#define JA_EJCT KC_EJCT
#define JA_MAIL KC_MAIL
#define JA_CALC KC_CALC
#define JA_MYCM KC_MYCM
#define JA_WSCH KC_WSCH
#define JA_WHOM KC_WHOM
#define JA_WBAK KC_WBAK
#define JA_WFWD KC_WFWD
#define JA_WSTP KC_WSTP
#define JA_WREF KC_WREF
#define JA_WFAV KC_WFAV
#define JA_MFFD KC_MFFD
#define JA_MRWD KC_MRWD
#define JA_BRIU KC_BRIU
#define JA_BRID KC_BRID

/* System Specific */
#define JA_BRMU KC_BRMU
#define JA_BRMD KC_BRMD

/* Mouse Keys */
#define JA_MS_U KC_MS_U
#define JA_MS_D KC_MS_D
#define JA_MS_L KC_MS_L
#define JA_MS_R KC_MS_R
#define JA_BTN1 KC_BTN1
#define JA_BTN2 KC_BTN2
#define JA_BTN3 KC_BTN3
#define JA_BTN4 KC_BTN4
#define JA_BTN5 KC_BTN5
#define JA_WH_U KC_WH_U
#define JA_WH_D KC_WH_D
#define JA_WH_L KC_WH_L
#define JA_WH_R KC_WH_R
#define JA_ACL0 KC_ACL0
#define JA_ACL1 KC_ACL1
#define JA_ACL2 KC_ACL2

/* Keyboard/Keypad Page (0x07) */
//enum hid_keyboard_keypad_usage
#define JA_NO KC_NO
#define JA_ROLL_OVER KC_ROLL_OVER
#define JA_POST_FAIL KC_POST_FAIL
#define JA_UNDEFINED KC_UNDEFINED
#define JA_A KC_A
#define JA_B KC_B
#define JA_C KC_C
#define JA_D KC_D
#define JA_E KC_E
#define JA_F KC_F
#define JA_G KC_G
#define JA_H KC_H
#define JA_I KC_I
#define JA_J KC_J
#define JA_K KC_K
#define JA_L KC_L
#define JA_M KC_M                   //0x10
#define JA_N KC_N
#define JA_O KC_O
#define JA_P KC_P
#define JA_Q KC_Q
#define JA_R KC_R
#define JA_S KC_S
#define JA_T KC_T
#define JA_U KC_U
#define JA_V KC_V
#define JA_W KC_W
#define JA_X KC_X
#define JA_Y KC_Y
#define JA_Z KC_Z
#define JA_1 KC_1
#define JA_2 KC_2
#define JA_3 KC_3                   //0x20
#define JA_4 KC_4
#define JA_5 KC_5
#define JA_6 KC_6
#define JA_7 KC_7
#define JA_8 KC_8
#define JA_9 KC_9
#define JA_0 KC_0
#define JA_ENTER KC_ENTER
#define JA_ENT KC_ENTER
#define JA_ESCAPE KC_ESCAPE
#define JA_ESC KC_ESCAPE
#define JA_BSPACE KC_BSPACE
#define JA_BSPC KC_BSPACE
#define JA_TAB KC_TAB
#define JA_SPACE KC_SPACE
#define JA_SPC KC_SPACE
#define JA_CAPSLOCK KC_CAPSLOCK
#define JA_F1 KC_F1
#define JA_F2 KC_F2
#define JA_F3 KC_F3
#define JA_F4 KC_F4
#define JA_F5 KC_F5
#define JA_F6 KC_F6
#define JA_F7 KC_F7                  //0x40
#define JA_F8 KC_F8
#define JA_F9 KC_F9
#define JA_F10 KC_F10
#define JA_F11 KC_F11
#define JA_F12 KC_F12
#define JA_PSCREEN KC_PSCREEN
#define JA_SCROLLLOCK KC_SCROLLLOCK
#define JA_PAUSE KC_PAUSE
#define JA_INSERT KC_INSERT
#define JA_HOME KC_HOME
#define JA_PGUP KC_PGUP
#define JA_DELETE KC_DELETE
#define JA_END KC_END
#define JA_PGDOWN KC_PGDOWN
#define JA_RIGHT KC_RIGHT
#define JA_LEFT KC_LEFT                //0x50
#define JA_DOWN KC_DOWN
#define JA_UP KC_UP
#define JA_NUMLOCK KC_NUMLOCK
#define JA_KP_SLASH KC_KP_SLASH
#define JA_KP_ASTERISK KC_KP_ASTERISK
#define JA_KP_MINUS KC_KP_MINUS
#define JA_KP_PLUS KC_KP_PLUS
#define JA_KP_ENTER KC_KP_ENTER
#define JA_KP_1 KC_KP_1
#define JA_KP_2 KC_KP_2
#define JA_KP_3 KC_KP_3
#define JA_KP_4 KC_KP_4
#define JA_KP_5 KC_KP_5
#define JA_KP_6 KC_KP_6
#define JA_KP_7 KC_KP_7
#define JA_KP_8 KC_KP_8                //0x60
#define JA_KP_9 KC_KP_9
#define JA_KP_0 KC_KP_0
#define JA_KP_DOT KC_KP_DOT
#define JA_NONUS_BSLASH KC_NONUS_BSLASH
#define JA_APPLICATION KC_APPLICATION
#define JA_POWER KC_POWER
#define JA_KP_EQUAL KC_KP_EQUAL
#define JA_F13 KC_F13
#define JA_F14 KC_F14
#define JA_F15 KC_F15
#define JA_F16 KC_F16
#define JA_F17 KC_F17
#define JA_F18 KC_F18
#define JA_F19 KC_F19
#define JA_F20 KC_F20
#define JA_F21 KC_F21                 
#define JA_F22 KC_F22
#define JA_F23 KC_F23
#define JA_F24 KC_F24
#define JA_EXECUTE KC_EXECUTE
#define JA_HELP KC_HELP
#define JA_MENU KC_MENU
#define JA_SELECT KC_SELECT
#define JA_STOP KC_STOP
#define JA_AGAIN KC_AGAIN
#define JA_UNDO KC_UNDO
#define JA_CUT KC_CUT
#define JA_COPY KC_COPY
#define JA_PASTE KC_PASTE
#define JA_FIND KC_FIND
#define JA__MUTE KC__MUTE
#define JA__VOLUP KC__VOLUP              
#define JA__VOLDOWN KC__VOLDOWN
#define JA_LOCKING_CAPS KC_LOCKING_CAPS
#define JA_LOCKING_NUM KC_LOCKING_NUM
#define JA_LOCKING_SCROLL KC_LOCKING_SCROLL
#define JA_KP_COMMA KC_KP_COMMA
#define JA_KP_EQUAL_AS400 KC_KP_EQUAL_AS400
#define JA_INT1 KC_INT1
#define JA_INT2 KC_INT2
#define JA_INT3 KC_INT3
#define JA_INT4 KC_INT4
#define JA_INT5 KC_INT5
#define JA_INT6 KC_INT6
#define JA_INT7 KC_INT7
#define JA_INT8 KC_INT8
#define JA_INT9 KC_INT9
#define JA_LANG1 KC_LANG1               
#define JA_LANG2 KC_LANG2
#define JA_LANG3 KC_LANG3
#define JA_LANG4 KC_LANG4
#define JA_LANG5 KC_LANG5
#define JA_LANG6 KC_LANG6
#define JA_LANG7 KC_LANG7
#define JA_LANG8 KC_LANG8
#define JA_LANG9 KC_LANG9
#define JA_ALT_ERASE KC_ALT_ERASE
#define JA_SYSREQ KC_SYSREQ
#define JA_CANCEL KC_CANCEL
#define JA_CLEAR KC_CLEAR
#define JA_PRIOR KC_PRIOR
#define JA_RETURN KC_RETURN
#define JA_SEPARATOR KC_SEPARATOR
#define JA_OUT KC_OUT
#define JA_OPER KC_OPER
#define JA_CLEAR_AGAIN KC_CLEAR_AGAIN
#define JA_CRSEL KC_CRSEL
#define JA_EXSEL KC_EXSEL

    /* Modifiers */
#define JA_LCTRL KC_LCTRL
#define JA_LSHIFT KC_LSHIFT
#define JA_LALT KC_LALT
#define JA_LGUI KC_LGUI
#define JA_RCTRL KC_RCTRL
#define JA_RSHIFT KC_RSHIFT
#define JA_RALT KC_RALT
#define JA_RGUI KC_RGUI
