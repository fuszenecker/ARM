#include <stdio.h>
#include <unistd.h>

#include "jtag.h"
#include "at91sam7s.h"

// ------------------------------------------------------------

int sam7_init() {
    unsigned int value;
        
#ifdef _DEBUG_SAM7
    printf("**** INIT *****\n");
#endif

    jtag_init(NULL);

#ifdef _DEBUG_SAM7
    printf("**** IR = 2 *****\n");
#endif

    value = jtag_set_ir(0x2, 4, RTI);

#ifdef _DEBUG_SAM7
    printf("VALUE = %08X\n", value);
    printf("**** DR = 2 *****\n");
#endif

    value = jtag_set_dr(0x2, 4, RTI);

#ifdef _DEBUG_SAM7
    printf("VALUE = %08X\n", value);
    printf("**** IR = 0xC *****\n");
#endif

    value = jtag_set_ir(0xc, 4, RTI);

    return 0;
}

// ------------------------------------------------------------

void wait_for_wr_ready() {
    unsigned int *ret_val;

    do {
#ifdef _DEBUG_SAM7
    	printf("**** DR = RD | DCCR | 0 *****\n");
#endif

    	ret_val = jtag_set_dr_38(RD | DCCR, 0, RTI);
    	ret_val = jtag_set_dr_38(RD | DCCR, 0, RTI);
    } while (ret_val[1] & R);
}

// ------------------------------------------------------------

void wait_for_rd_ready() {
    unsigned int *ret_val;

    do {
#ifdef _DEBUG_SAM7
    	printf("**** DR = RD | DCCR | 0 *****\n");
#endif

    	ret_val = jtag_set_dr_38(RD | DCCR, 0, RTI);
    	ret_val = jtag_set_dr_38(RD | DCCR, 0, RTI);
    } while (!(ret_val[1] & W));
}

// ------------------------------------------------------------

unsigned int sam7_get_version() {
    unsigned int version[2];
    unsigned int command_w[2] = {WR | DCDR, GET_VERSION};
    unsigned int command_r[2] = {RD | DCDR, GET_VERSION};

    wait_for_wr_ready();

#ifdef _DEBUG_SAM7
    printf("**** DR = WR | DCDR | 0x001E (Get Version) *****\n");
#endif

    jtag_set_dr_n(command_w, version, 38, RTI);
    jtag_set_dr_n(command_r, version, 38, RTI);

#ifdef _DEBUG_SAM7
    printf("VALUE38 = %08X%08X\n", version[0], version[1]);
    printf("VERSION = %08X\n", version[1]);
#endif

    return version[1];
}

// ------------------------------------------------------------

int sam7_write_flash(unsigned int *buffer, int size) {
    unsigned int word;
    unsigned int *ret_val;
    
#ifdef _ERASE_BEFORE_WRITE

    wait_for_wr_ready();

#ifdef _DEBUG_SAM7
    printf("**** DR = WR | DCDR | EA *****\n");
#endif

    jtag_set_dr_38(WR | DCDR, EA, RTI);
#endif

#ifdef _DEBUG_SAM7
    printf("**** DR = WR | DCDR | %04X << 16 | EWP *****\n", size);
#endif

    wait_for_wr_ready();
    jtag_set_dr_38(WR | DCDR, size << 16 | EWP, RTI);

#ifdef _DEBUG_SAM7
    printf("**** DR = WR | DCDR | %08X *****\n", FLASH_ADDR);
#endif

    wait_for_wr_ready();
    jtag_set_dr_38(WR | DCDR, FLASH_ADDR, RTI);

    for (word = 0; word < size; word++) {

    	wait_for_wr_ready();

#ifdef _DEBUG_SAM7
        printf("**** WR_WORD %d: DR = WR | DCDR | %08X\t", word, buffer[word]);
#endif

        ret_val = jtag_set_dr_38(WR | DCDR, buffer[word], RTI);
        usleep(8000);
        
#ifdef _DEBUG_SAM7
        printf("RET_VAL: 0x%08X%08X *****\n", ret_val[0], ret_val[1]);
#endif
    }

    return size;
}

// ------------------------------------------------------------

int sam7_read_flash(unsigned int *buffer, int size) {
    unsigned int word;
    unsigned int *ret_val;

    wait_for_wr_ready();

#ifdef _DEBUG_SAM7
    printf("**** DR = WR | DCDR | %04X << 16 | READ *****\n", size);
#endif

    jtag_set_dr_38(WR | DCDR, size << 16 | READ, RTI);

#ifdef _DEBUG_SAM7
    printf("**** DR = WR | DCDR | FLASH_ADDR *****\n");
#endif

    wait_for_wr_ready();

    jtag_set_dr_38(WR | DCDR, FLASH_ADDR, RTI);

    for (word = 0; word < size; word++) {
	    
    	wait_for_rd_ready();
    
#ifdef _DEBUG_SAM7
        printf("**** RD_WORD: %d  \t", word);
#endif
        ret_val = jtag_set_dr_38(RD | DCDR, 0, RTI);
        buffer[word] = ret_val[1];

#ifdef _DEBUG_SAM7
        printf("[%08X %08X] WORD: %08X *****\n", ret_val[0], ret_val[1], buffer[word]);
#endif
    }

    return size;
}

// ------------------------------------------------------------

int sam7_write_fuses(unsigned int bits) {
    unsigned int ret_val[2], command_1[] = { WR | DCDR, SFB }, command_2[] = { WR | DCDR, 0x55AA00FF};

#ifdef _DEBUG_SAM7
    printf("**** DR = WR | DCDR | SFB *****\n");
#endif

    // wait_for_wr_ready();
    jtag_set_dr_n(command_1, ret_val, 38, RTI);

#ifdef _DEBUG_SAM7
    printf("**** DR = WR | DCDR | %08X *****\n", bits);
#endif

    // wait_for_wr_ready();
    jtag_set_dr_n(command_2, ret_val, 38, RTI);

    return 0;
}

// ------------------------------------------------------------

unsigned int sam7_read_fuses() {
    unsigned int ret_val[2], command_w[] = { WR | DCDR, GFB }, command_r[] = { RD | DCDR, 0};
    
#ifdef _DEBUG_SAM7
    printf("**** DR = WR | DCDR | GFB *****\n");
#endif

    // wait_for_wr_ready();
    jtag_set_dr_n(command_w, ret_val, 38, RTI);

#ifdef _DEBUG_SAM7
    printf("**** DR = RD | DCDR | 0 *****\n");
#endif

    // wait_for_wr_ready();
    jtag_set_dr_n(command_r, ret_val, 38, RTI);

    return ret_val[1];
}

// ------------------------------------------------------------

