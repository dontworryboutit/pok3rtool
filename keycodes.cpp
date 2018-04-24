#include "keycodes.h"

#include "zmap.h"

struct Keycode {
    ZString name;
    ZString abbrev;
    ZString desc;
};

const ZMap<zu16, Keycode> keycodes = {
    { KC_NO,                { "KC_NO",              "",         "None" } },
    { KC_TRANSPARENT,       { "KC_TRNS",            "",         "Transparent" } },
    { KC_A,                 { "KC_A",               "A",        "A" } },
    { KC_B,                 { "KC_B",               "B",        "B" } },
    { KC_C,                 { "KC_C",               "C",        "C" } },
    { KC_D,                 { "KC_D",               "D",        "D" } },
    { KC_E,                 { "KC_E",               "E",        "E" } },
    { KC_F,                 { "KC_F",               "F",        "F" } },
    { KC_G,                 { "KC_G",               "G",        "G" } },
    { KC_H,                 { "KC_H",               "H",        "H" } },
    { KC_I,                 { "KC_I",               "I",        "I" } },
    { KC_J,                 { "KC_J",               "J",        "J" } },
    { KC_K,                 { "KC_K",               "K",        "K" } },
    { KC_L,                 { "KC_L",               "L",        "L" } },
    { KC_M,                 { "KC_M",               "M",        "M" } },
    { KC_N,                 { "KC_N",               "N",        "N" } },
    { KC_O,                 { "KC_O",               "O",        "O" } },
    { KC_P,                 { "KC_P",               "P",        "P" } },
    { KC_Q,                 { "KC_Q",               "Q",        "Q" } },
    { KC_R,                 { "KC_R",               "R",        "R" } },
    { KC_S,                 { "KC_S",               "S",        "S" } },
    { KC_T,                 { "KC_T",               "T",        "T" } },
    { KC_U,                 { "KC_U",               "U",        "U" } },
    { KC_V,                 { "KC_V",               "V",        "V" } },
    { KC_W,                 { "KC_W",               "W",        "W" } },
    { KC_X,                 { "KC_X",               "X",        "X" } },
    { KC_Y,                 { "KC_Y",               "Y",        "Y" } },
    { KC_Z,                 { "KC_Z",               "Z",        "Z" } },
    { KC_1,                 { "KC_1",               "1",        "1" } },
    { KC_2,                 { "KC_2",               "2",        "2" } },
    { KC_3,                 { "KC_3",               "3",        "3" } },
    { KC_4,                 { "KC_4",               "4",        "4" } },
    { KC_5,                 { "KC_5",               "5",        "5" } },
    { KC_6,                 { "KC_6",               "6",        "6" } },
    { KC_7,                 { "KC_7",               "7",        "7" } },
    { KC_8,                 { "KC_8",               "8",        "8" } },
    { KC_9,                 { "KC_9",               "9",        "9" } },
    { KC_0,                 { "KC_0",               "0",        "0" } },
    { KC_ENTER,             { "KC_ENTER",           "RETURN",   "Enter" } },
    { KC_ESCAPE,            { "KC_ESCAPE",          "ESC",      "Esc" } },
    { KC_BSPACE,            { "KC_BSPACE",          "BSPACE",   "Backspace" } },
    { KC_TAB,               { "KC_TAB",             "TAB",      "Tab" } },
    { KC_SPACE,             { "KC_SPACE",           "SPACE",    "Space" } },
    { KC_MINUS,             { "KC_MINUS",           "-",        "-" } },
    { KC_EQUAL,             { "KC_EQUAL",           "=",        "=" } },
    { KC_LBRACKET,          { "KC_LBRACKET",        "[",        "[" } },
    { KC_RBRACKET,          { "KC_RBRACKET",        "]",        "]" } },
    { KC_BSLASH,            { "KC_BSLASH",          "\\",       "\\" } },
    { KC_NONUS_HASH,        { "KC_NONUS_HASH",      "",         "# (Non-US)" } },
    { KC_SCOLON,            { "KC_SCOLON",          ";",        ";" } },
    { KC_QUOTE,             { "KC_QUOTE",           "'",        "'" } },
    { KC_GRAVE,             { "KC_GRAVE",           "`",        "`" } },
    { KC_COMMA,             { "KC_COMMA",           ",",        "," } },
    { KC_DOT,               { "KC_DOT",             ".",        "." } },
    { KC_SLASH,             { "KC_SLASH",           "/",        "/" } },
    { KC_CAPSLOCK,          { "KC_CAPSLOCK",        "CAPS",     "Caps Lock" } },
    { KC_F1,                { "KC_F1",              "F1",       "F1" } },
    { KC_F2,                { "KC_F2",              "F2",       "F2" } },
    { KC_F3,                { "KC_F3",              "F3",       "F3" } },
    { KC_F4,                { "KC_F4",              "F4",       "F4" } },
    { KC_F5,                { "KC_F5",              "F5",       "F5" } },
    { KC_F6,                { "KC_F6",              "F6",       "F6" } },
    { KC_F7,                { "KC_F7",              "F7",       "F7" } },
    { KC_F8,                { "KC_F8",              "F8",       "F8" } },
    { KC_F9,                { "KC_F9",              "F9",       "F9" } },
    { KC_F10,               { "KC_F10",             "F10",      "F10" } },
    { KC_F11,               { "KC_F11",             "F11",      "F11" } },
    { KC_F12,               { "KC_F12",             "F12",      "F12" } },
    { KC_PSCREEN,           { "KC_PSCREEN",         "PRSC",     "Print Screen" } },
    { KC_SCROLLLOCK,        { "KC_SCROLLLOCK",      "SCLK",     "Scroll Lock" } },
    { KC_PAUSE,             { "KC_PAUSE",           "PAUS",     "Pause" } },
    { KC_INSERT,            { "KC_INSERT",          "INS",      "Insert" } },
    { KC_HOME,              { "KC_HOME",            "HOME",     "Home" } },
    { KC_PGUP,              { "KC_PGUP",            "PGUP",     "Page Up" } },
    { KC_DELETE,            { "KC_DELETE",          "DEL",      "Delete" } },
    { KC_END,               { "KC_END",             "END",      "End" } },
    { KC_PGDOWN,            { "KC_PGDOWN",          "PGDN",     "Page Down" } },
    { KC_RIGHT,             { "KC_RIGHT",           "RIGHT",    "Right Arrow" } },
    { KC_LEFT,              { "KC_LEFT",            "LEFT",     "Left Arrow" } },
    { KC_DOWN,              { "KC_DOWN",            "DOWN",     "Down Arrow" } },
    { KC_UP,                { "KC_UP",              "UP",       "Up Arrow" } },
    { KC_NUMLOCK,           { "KC_NUMLOCK",         "NUMLK",    "Number Lock" } },
    { KC_KP_SLASH,          { "KC_KP_SLASH",        "/",        "Keypad /" } },
    { KC_KP_ASTERISK,       { "KC_KP_ASTERISK",     "*",        "Keypad *" } },
    { KC_KP_MINUS,          { "KC_KP_MINUS",        "-",        "Keypad -" } },
    { KC_KP_PLUS,           { "KC_KP_PLUS",         "+",        "Keypad +" } },
    { KC_KP_ENTER,          { "KC_KP_ENTER",        "ENTER",    "Keypad Enter" } },
    { KC_KP_1,              { "KC_KP_1",            "1",        "Keypad 1" } },
    { KC_KP_2,              { "KC_KP_2",            "2",        "Keypad 2" } },
    { KC_KP_3,              { "KC_KP_3",            "3",        "Keypad 3" } },
    { KC_KP_4,              { "KC_KP_4",            "4",        "Keypad 4" } },
    { KC_KP_5,              { "KC_KP_5",            "5",        "Keypad 5" } },
    { KC_KP_6,              { "KC_KP_6",            "6",        "Keypad 6" } },
    { KC_KP_7,              { "KC_KP_7",            "7",        "Keypad 7" } },
    { KC_KP_8,              { "KC_KP_8",            "8",        "Keypad 8" } },
    { KC_KP_9,              { "KC_KP_9",            "9",        "Keypad 9" } },
    { KC_KP_0,              { "KC_KP_0",            "0",        "Keypad 0" } },
    { KC_KP_DOT,            { "KC_KP_DOT",          ".",        "Keypad ." } },
    { KC_NONUS_BSLASH,      { "KC_NONUS_BSLASH",    "\\",       "" } },
    { KC_APPLICATION,       { "KC_APPLICATION",     "APP",      "Application Menu" } },
    { KC_POWER,             { "KC_POWER",           "POW",      "" } },
    { KC_KP_EQUAL,          { "KC_KP_EQUAL",        "",         "Keypad =" } },
    { KC_F13,               { "KC_F13",             "F13",      "F13" } },
    { KC_F14,               { "KC_F14",             "F14",      "F14" } },
    { KC_F15,               { "KC_F15",             "F15",      "F15" } },
    { KC_F16,               { "KC_F16",             "F16",      "F16" } },
    { KC_F17,               { "KC_F17",             "F17",      "F17" } },
    { KC_F18,               { "KC_F18",             "F18",      "F18" } },
    { KC_F19,               { "KC_F19",             "F19",      "F19" } },
    { KC_F20,               { "KC_F20",             "F20",      "F20" } },
    { KC_F21,               { "KC_F21",             "F21",      "F21" } },
    { KC_F22,               { "KC_F22",             "F22",      "F22" } },
    { KC_F23,               { "KC_F23",             "F23",      "F23" } },
    { KC_F24,               { "KC_F24",             "F24",      "F24" } },
    { KC_EXECUTE,           { "KC_EXECUTE",         "",         "" } },
    { KC_HELP,              { "KC_HELP",            "",         "" } },
    { KC_MENU,              { "KC_MENU",            "",         "" } },
    { KC_SELECT,            { "KC_SELECT",          "",         "" } },
    { KC_STOP,              { "KC_STOP",            "",         "" } },
    { KC_AGAIN,             { "KC_AGAIN",           "",         "" } },
    { KC_UNDO,              { "KC_UNDO",            "",         "" } },
    { KC_CUT,               { "KC_CUT",             "",         "" } },
    { KC_COPY,              { "KC_COPY",            "",         "" } },
    { KC_PASTE,             { "KC_PASTE",           "",         "" } },
    { KC_FIND,              { "KC_FIND",            "",         "" } },
    { KC__MUTE,             { "KC__MUTE",           "",         "" } },
    { KC__VOLUP,            { "KC__VOLUP",          "",         "" } },
    { KC__VOLDOWN,          { "KC__VOLDOWN",        "",         "" } },
    { KC_LOCKING_CAPS,      { "KC_LOCKING_CAPS",    "",         "" } },
    { KC_LOCKING_NUM,       { "KC_LOCKING_NUM",     "",         "" } },
    { KC_LOCKING_SCROLL,    { "KC_LOCKING_SCROLL",  "",         "" } },
    { KC_KP_COMMA,          { "KC_KP_COMMA",        "",         "" } },
    { KC_KP_EQUAL_AS400,    { "KC_KP_EQUAL_AS400",  "",         "" } },
    { KC_INT1,              { "KC_INT1",            "",         "International 1" } },
    { KC_INT2,              { "KC_INT2",            "",         "International 2" } },
    { KC_INT3,              { "KC_INT3",            "",         "International 3" } },
    { KC_INT4,              { "KC_INT4",            "",         "International 4" } },
    { KC_INT5,              { "KC_INT5",            "",         "International 5" } },
    { KC_INT6,              { "KC_INT6",            "",         "International 6" } },
    { KC_INT7,              { "KC_INT7",            "",         "International 7" } },
    { KC_INT8,              { "KC_INT8",            "",         "International 8" } },
    { KC_INT9,              { "KC_INT9",            "",         "International 9" } },
    { KC_LANG1,             { "KC_LANG1",           "",         "" } },
    { KC_LANG2,             { "KC_LANG2",           "",         "" } },
    { KC_LANG3,             { "KC_LANG3",           "",         "" } },
    { KC_LANG4,             { "KC_LANG4",           "",         "" } },
    { KC_LANG5,             { "KC_LANG5",           "",         "" } },
    { KC_LANG6,             { "KC_LANG6",           "",         "" } },
    { KC_LANG7,             { "KC_LANG7",           "",         "" } },
    { KC_LANG8,             { "KC_LANG8",           "",         "" } },
    { KC_LANG9,             { "KC_LANG9",           "",         "" } },
    { KC_ALT_ERASE,         { "KC_ALT_ERASE",       "",         "" } },
    { KC_SYSREQ,            { "KC_SYSREQ",          "SYSREQ",   "" } },
    { KC_CANCEL,            { "KC_CANCEL",          "CANCEL",   "" } },
    { KC_CLEAR,             { "KC_CLEAR",           "",         "" } },
    { KC_PRIOR,             { "KC_PRIOR",           "",         "" } },
    { KC_RETURN,            { "KC_RETURN",          "",         "" } },
    { KC_SEPARATOR,         { "KC_SEPARATOR",       "",         "" } },
    { KC_OUT,               { "KC_OUT",             "",         "" } },
    { KC_OPER,              { "KC_OPER",            "",         "" } },
    { KC_CLEAR_AGAIN,       { "KC_CLEAR_AGAIN",     "",         "" } },
    { KC_CRSEL,             { "KC_CRSEL",           "",         "" } },
    { KC_EXSEL,             { "KC_EXSEL",           "",         "" } },
    { KC_LCTRL,             { "KC_LCTRL",           "LCTRL",    "Left Control" } },
    { KC_LSHIFT,            { "KC_LSHIFT",          "LSHIFT",   "Left Shift" } },
    { KC_LALT,              { "KC_LALT",            "LAFT",     "Left Alt" } },
    { KC_LGUI,              { "KC_LGUI",            "LGUI",     "Left GUI" } },
    { KC_RCTRL,             { "KC_RCTRL",           "RCTRL",    "Right Control" } },
    { KC_RSHIFT,            { "KC_RSHIFT",          "RSHIFT",   "Right Shift" } },
    { KC_RALT,              { "KC_RALT",            "RALT",     "Right Alt" } },
    { KC_RGUI,              { "KC_RGUI",            "RGUI",     "Right GUI" } },

    { QK_MOMENTARY,         { "QK_MOMENTARY_0",      "MO(0)",   "Momentary Layer 0" } },
    { QK_MOMENTARY + 1,     { "QK_MOMENTARY_1",      "MO(1)",   "Momentary Layer 1" } },
    { QK_MOMENTARY + 2,     { "QK_MOMENTARY_2",      "MO(2)",   "Momentary Layer 2" } },
    { QK_MOMENTARY + 3,     { "QK_MOMENTARY_3",      "MO(3)",   "Momentary Layer 3" } },
    { QK_MOMENTARY + 4,     { "QK_MOMENTARY_4",      "MO(4)",   "Momentary Layer 4" } },
    { QK_MOMENTARY + 5,     { "QK_MOMENTARY_5",      "MO(5)",   "Momentary Layer 5" } },
    { QK_MOMENTARY + 6,     { "QK_MOMENTARY_6",      "MO(6)",   "Momentary Layer 6" } },
    { QK_MOMENTARY + 7,     { "QK_MOMENTARY_7",      "MO(7)",   "Momentary Layer 7" } },
};

ZString keycodeName(zu16 kc){
    if(keycodes.contains(kc)){
        return keycodes[kc].name;
    } else {
        return "0x" + ZString::ItoS(kc, 16, 4);
    }
}

ZString keycodeAbbrev(zu16 kc){
    if(keycodes.contains(kc)){
        return keycodes[kc].abbrev;
    } else {
        return "0x" + ZString::ItoS(kc, 16, 4);
    }
}

ZString keycodeDesc(zu16 kc){
    if(keycodes.contains(kc)){
        return keycodes[kc].desc;
    } else {
        return "0x" + ZString::ItoS(kc, 16, 4);
    }
}
