#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device Descriptor Parameter*/
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x2260
#define DEVICE_VER      0x0001
#define MANUFACTURER    Alex
#define PRODUCT         Keyboard
#define DESCRIPTION     5x14 Ortho Keyboard

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 14

/* key matrix pins */
#define MATRIX_ROW_PINS { F7, F6, F5, F4, F1}
#define MATRIX_COL_PINS { B5, B4, D7, D6, D4, F1, F4, F5, D5, D3, D2, D1, D0, B2 }
#define UNUSED_PINS { F0 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW


#endif