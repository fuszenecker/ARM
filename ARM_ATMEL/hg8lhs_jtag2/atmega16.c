#include <stdio.h>

#include "jtag.h"
#include "atmega16.h"

void avr_init() {
#ifdef _DEBUG_ATMEGA16
    printf("**** AVR_INIT ****\n");
#endif
    jtag_init(NULL);
    
    jtag_set_ir(REG_AVR_RESET, 4, RTI);
    jtag_set_dr(1, 1, RTI);

    jtag_set_ir(REG_PROG_ENABLE, 4, RTI);
    jtag_set_dr(PROG_SIGN, 16, RTI);
}

void avr_exit() {
#ifdef _DEBUG_ATMEGA16
    printf("**** AVR_EXIT ****\n");
#endif
    jtag_init(NULL);
    
    jtag_set_ir(REG_AVR_RESET, 4, RTI);
    jtag_set_dr(0, 1, RTI);

    jtag_set_ir(REG_PROG_ENABLE, 4, RTI);
    jtag_set_dr(PROG_SIGN, 16, RTI);
}

void avr_chip_erase() {
#ifdef _DEBUG_ATMEGA16
    printf("**** AVR_CHIP_ERASE ****\n");
#endif
    unsigned int result;

    jtag_set_ir(REG_PROG_COMMANDS, 4, RTI);
    jtag_set_dr(ERASE1, 15, RTI);
    jtag_set_dr(ERASE2, 15, RTI);
    jtag_set_dr(ERASE3, 15, RTI);
    jtag_set_dr(ERASE3, 15, RTI);
   
    do { 
        result = jtag_set_dr(ERASE3, 15, RTI);
        
#ifdef _DEBUG_ATMEGA16
        printf("FLASH_ERASE_BUSY...\n");
#endif

    } while (result & ERASE_BUSY);
}

void avr_flash_write(unsigned int start, unsigned int *words, int size) {
    unsigned int result;
    unsigned int addr;

#ifdef _DEBUG_ATMEGA16
    printf("**** AVR_FLASH_WRITE ****\n");
#endif

    jtag_set_ir(REG_PROG_COMMANDS, 4, RTI);
    jtag_set_dr(FLASH_WRITE, 15, RTI);

    for (addr = start; addr < size+start; addr++) {
            
#ifdef _DEBUG_ATMEGA16
        printf("WRITE %04X %08X\n", addr, words[addr]);
#endif

        jtag_set_dr(LOAD_ADDR_HI | ((unsigned char) (addr >> 8)), 15, RTI);
        jtag_set_dr(LOAD_ADDR_LO | ((unsigned char) (addr & 0xff)), 15, RTI);
        jtag_set_dr(LOAD_DATA_LO | ((unsigned char) (words[addr] >> 8) & 0xff), 15, RTI);
        jtag_set_dr(LOAD_DATA_HI | ((unsigned char) (words[addr] & 0xff)), 15, RTI);

//        jtag_set_dr(LATCH_DATA0, 15, RTI);
//        jtag_set_dr(LATCH_DATA1, 15, RTI);
//        jtag_set_dr(LATCH_DATA0, 15, RTI);
    }
    
//    jtag_set_dr(WRITE_FLASH_PAGE0, 15, RTI);
//    jtag_set_dr(WRITE_FLASH_PAGE1, 15, RTI);
//    jtag_set_dr(WRITE_FLASH_PAGE0, 15, RTI);
//    jtag_set_dr(WRITE_FLASH_PAGE0, 15, RTI);

    do { 
        result = jtag_set_dr(WRITE_FLASH_PAGE0, 15, RTI);

#ifdef _DEBUG_ATMEGA16
        printf("FLASH_WRITE_BUSY...\n");
#endif

    } while (result & ERASE_BUSY);
}

void avr_flash_read(unsigned int start, unsigned int *words, int size) {
    unsigned int result_lo, result_hi;
    unsigned int addr;

#ifdef _DEBUG_ATMEGA16
    printf("**** AVR_FLASH_READ ****\n");
#endif

    jtag_set_ir(REG_PROG_COMMANDS, 4, RTI);
    jtag_set_dr(FLASH_READ, 15, RTI);

    for (addr = start; addr < size+start; addr++) {
        jtag_set_dr(LOAD_ADDR_HI | ((unsigned char) (addr >> 8)), 15, RTI);
        jtag_set_dr(LOAD_ADDR_LO | ((unsigned char) (addr & 0xff)), 15, RTI);

        jtag_set_dr(READ_FLASH, 15, RTI);
        result_lo = jtag_set_dr(READ_LO, 15, RTI);
        result_hi = jtag_set_dr(READ_HI, 15, RTI);

        printf("READ: %04X %04X %04X\n", addr, result_hi, result_lo);
    }
}
