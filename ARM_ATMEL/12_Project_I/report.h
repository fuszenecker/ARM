#ifndef __REPORT_H__
#define __REPORT_H__

#include "ports.h"

inline void report_error() {
    AT91F_PIO_SetOutput(AT91C_BASE_PIOA, 1 << ERROR_LED);
    AT91F_PIO_ClearOutput(AT91C_BASE_PIOA, 1 << OK_LED);
}

inline void report_ready() {
    AT91F_PIO_ClearOutput(AT91C_BASE_PIOA, 1 << ERROR_LED);
    AT91F_PIO_SetOutput(AT91C_BASE_PIOA, 1 << OK_LED);
}

inline void report_off() {
    AT91F_PIO_ClearOutput(AT91C_BASE_PIOA, 1 << ERROR_LED);
    AT91F_PIO_ClearOutput(AT91C_BASE_PIOA, 1 << OK_LED);
}

#endif
