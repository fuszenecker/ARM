// ---------------------------------------------------------------------------
// This file contains the "main()" function of the microcontroller.
// ---------------------------------------------------------------------------

#include <config.h>
#include <sysinit.h>

#include <irq.h>
#include <gpio.h>
#include <clock.h>

#include "codec.h"

#define POLY    0x187
#define SIZE    8
#define PAR     4

#define LED_MEASURE (1 << 8)

extern const unsigned int f_cpu;                      // Frequency of CPU clock

// ---------------------------------------------------------------------------
// The "main()" function is started by the "sysinit()" routine.
// The "sysinit()" is the function that is started when the MCU starts.
// ---------------------------------------------------------------------------

int main() {
    GElement vector[SIZE + PAR];

    vector[0] = 12;
    vector[1] = 9;
    vector[2] = 2;
    vector[3] = 1;
    vector[4] = 5;
    vector[5] = 8;
    vector[6] = 80;
    vector[7] = 27;

    struct Codec codec;
    int retval, c;

    retval = fc_encode(&codec, vector, SIZE, SIZE + PAR);

    // Until I realize nirvana...

    fc_initialize(&codec, POLY);
    for (c = 0;; c++) {
        // vector[7] = 0;
        // vector[2] = 0;
        // vector[6] = 0;
        // vector[9] = 0;
        // vector[10] = 0;

        fc_decode(&codec, vector, SIZE, SIZE + PAR);

        if (c & 1)
            gpioa_set(LED_MEASURE);
        else
            gpioa_clear(LED_MEASURE);
    }

    while (1) {
    }
}

