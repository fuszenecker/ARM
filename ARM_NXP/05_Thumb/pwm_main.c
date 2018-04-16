#include "lpc2103.h"
#include "../LPC210x/library.h"

int pwm_main() {
    register unsigned int value, r0;

    IODIR = 0xffffffff;
    IOPIN = 0xaaaaaaaa;

    for (;;) {
        for(value = 0; value < 3300; value++) {
            set_pwm_20(value, 3300);

            for (r0 = 0; r0 < 128; r0++);
        }

        for(; value > 0; value--) {
            set_pwm_20(value, 3300);

            for (r0 = 0; r0 < 128; r0++);
        }
    }

    return 2;
}

