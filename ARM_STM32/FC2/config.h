#ifndef __CONFIG_H__
#define __CONFIG_H__

#include <stdint.h>

typedef uint8_t             GElement;
typedef uint16_t            GPolynom;

#ifndef DEFAULT_POLYNOM
#define DEFAULT_POLYNOM     0x0000011D
#endif

#ifndef GALOIS_TABLE_SIZE
#define GALOIS_TABLE_SIZE   (1 << (sizeof(GElement) * 8))
#endif

// #define SUPPORT_1_CORRECTION
// #define SUPPORT_2_CORRECTION
// #define SUPPORT_3_CORRECTION
// #define SUPPORT_4_CORRECTION
// #define SUPPORT_5_CORRECTION

#ifndef NULL
#define NULL                (void *) 0l
#endif

#endif
