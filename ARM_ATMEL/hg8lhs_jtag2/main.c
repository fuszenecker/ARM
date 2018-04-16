#include <stdio.h>
#include <unistd.h>

#include "jtag.h"
#include "atmega16.h"
#include "main.h"

unsigned int buffer[1024] = {
    0x55aa00ff, 0x19781027,
    0x20070323, 0x00224154,
    'H', 'G', '8', 'L', 'H', 'S'
}, read_buffer[1024];

int main() {
    int c;
    jtag_init(NULL);
    avr_init();
    avr_chip_erase();
    avr_flash_write(0, buffer, 64);
    avr_flash_read(0, buffer,  12);
    return 0;
}
