// ---------------------------------------------------------------------------
// This header file contains only function declarations
// ---------------------------------------------------------------------------

#ifndef __HEX2NUM_H__
#define __HEX2NUM_H__

// Convert character string (hexadecimal number) to numeric value
unsigned int hex2num(char *str, int digits);

// Convert numeric value to character string (hexadecimal number)
unsigned int num2hex(unsigned int num, char *str, unsigned int digits);

#endif
