#include "lpc2103.h"
#include "library.h"

// pll_setup(4, 1) --> recommended values

void inline setup_pll(int mul, int div) {
    PLLCFG = (div << 5) | mul;              // Set configuration register (mul and div)
    PLLFEED = 0xAA; PLLFEED = 0x55;         // We have to say, that we are legal
    PLLCON = 1;                             // Enable PLL
    PLLFEED = 0xAA; PLLFEED = 0x55;         // Yes, we are legal

    while (!(PLLSTAT & 0x400));             // Wait for PLL set up

    PLLCON = 3;                             // Change to PLL
    PLLFEED = 0xAA; PLLFEED = 0x55;         // Yes, we are sure...
}

