// ---------------------------------------------------------------------------
// This file contains two routines that converts numeric values to
// hexadecimal "strings" anv vica versa.
// ---------------------------------------------------------------------------

#include <num_conv.h>

// ---------------------------------------------------------------------------
// The function converts a characher (0123456789aAbBcCdDeEfF) to numeric 
// value.
// ---------------------------------------------------------------------------

unsigned int hex_decode(char digit) {
    switch(digit) {
        case '0':
            return 0;
        case '1':
            return 1;
        case '2':
            return 2;
        case '3':
            return 3;
        case '4':
            return 4;
        case '5':
            return 5;
        case '6':
            return 6;
        case '7':
            return 7;
        case '8':
            return 8;
        case '9':
            return 9;
        case 'A':
        case 'a':
            return 10;
        case 'B':
        case 'b':
            return 11;
        case 'C':
        case 'c':
            return 12;
        case 'D':
        case 'd':
            return 13;
        case 'E':
        case 'e':
            return 14;
        case 'F':
        case 'f':
            return 15;
        default:
            return -1;
    }
}

// ---------------------------------------------------------------------------
// Converts hex string to numeric value:
// 1st argument: pointer to the string
// 2nd argument: the number of the digits to be processed
// ---------------------------------------------------------------------------

unsigned int hex2num(char *str, int digits) {
    int k;
    unsigned int value = 0;

    for (k = 0; k < digits; k++) {
        value <<= 4;
        value |= hex_decode(str[k]);
    }

    return value;
}

// ---------------------------------------------------------------------------
// Converts numeric value to hex string:
// 1st argument: the number itself
// 2nd argument: pointer to the string
// 3rd argument: the number of the digits to be "displayed"
// ---------------------------------------------------------------------------

const char xtab[] = "0123456789ABCDEF";

unsigned int num2hex(unsigned int num, char *str, unsigned int digits) {
    int k;

    for (k = digits - 1; k >= 0; k--) {
        str[digits - k - 1] = xtab[(num >> (4 * k)) & 0x0f];
    }

    str[digits] = 0;

    return 0;
}

