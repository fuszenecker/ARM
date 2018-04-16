#include "lpc2103.h"
#include "library.h"

void display_num_nl(char num) {
    char xch;
    int i;
    
    IODIR |= LATCH | SERIN | CLK;           // They are outputs
    IOPIN &= ~(LATCH | SERIN | CLK);        // With default value 000_bin

    switch (num) {
        case 0:
            xch = D_A | D_B | D_C | D_D | D_E | D_F;
            break;
        case 1:
            xch = D_B | D_C;
            break;
        case 2:
            xch = D_A | D_B | D_D | D_E | D_G;
            break;
        case 3:
            xch = D_A | D_B | D_C | D_D | D_G;
            break;
        case 4:
            xch = D_B | D_C | D_F | D_G;
            break;
        case 5:
            xch = D_A | D_C | D_D | D_F | D_G;
            break;
        case 6:
            xch = D_A | D_C | D_D | D_E | D_F | D_G;
            break;
        case 7:
            xch = D_A | D_B | D_C | D_F;
            break;
        case 8:
            xch = D_A | D_B | D_C | D_D | D_E | D_F | D_G;
            break;
        case 9:
            xch = D_A | D_B | D_C | D_D | D_F | D_G;
            break;
        case 10:                                    // '-' sign 
            xch = D_G;
            break;
        case 11:                                    // 'F' sign
            xch = D_A | D_E | D_F | D_G;
            break;
        case 12:                                    // 'E' sign
            xch = D_A | D_D | D_E | D_F | D_G;
            break;
        case 13:                                    // 'U' sign
            xch = D_B | D_C | D_D | D_E | D_F;
            break;
        case 14:                                    // 'n' sign
            xch = D_C | D_E | D_G;
            break;
        default:
            xch = 0;
            break;
    }

    for (i = 0; i < 8; i++) {
        if (xch & (1 << (7 - i)))
            IOPIN &= ~SERIN;
        else
            IOPIN |= SERIN;

        IOPIN |= CLK;
        IOPIN &= ~CLK;
    }
}

void display_num(char num) {
    display_num_nl(num);

    IOPIN |= LATCH;
    IOPIN &= ~LATCH;
}

