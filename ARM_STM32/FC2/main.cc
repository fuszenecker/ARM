#include <stm32f10x_lib.h>
#include "codec.h"

#define DATA    8
#define PARITY  4

int main() {
    Codec codec(0x187);
    unsigned char data[12] = {0, 9, 7, 3, 5, 2, 2, 8};
    
    codec.encode(data, DATA, DATA + PARITY);
    
    //
    
    codec.decode(data, DATA, DATA + PARITY);
    
    return 0;
}
