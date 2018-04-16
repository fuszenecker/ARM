#include "lpc2103.h"
#include "library.h"

int get_adc3() {
    PINSEL0 &= ~(3 << 20);
    PINSEL0 |= 3 << 20;

    ADCR = (1 << 3) | (2 << 8) | (1 << 21) | (1 << 24);

    while (!(ADGDR & 0x80000000));

    return (ADGDR >> 6) & 0x3ff;
}

