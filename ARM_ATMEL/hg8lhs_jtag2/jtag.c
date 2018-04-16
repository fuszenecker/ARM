#include <sys/io.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "jtag.h"

// -------------------------------------------------------------------

void delay() {
    int c;

//    usleep(DELAY);

//    for (c = 0; c < 1000; c++)
//    	asm("nop");
}

// -------------------------------------------------------------------

void reset(int status) {
#ifdef _DEBUG_PINS
    printf("RESET: %d\n", inb(PARPORT));
#endif

    if (status)
        outb(inb(PARPORT) | RESET, PARPORT);
    else
        outb(inb(PARPORT) & ~RESET, PARPORT);


#ifdef _DEBUG_PINS
    printf("RESET: %d\n", inb(PARPORT));
#endif

    delay();
}

// -------------------------------------------------------------------

void tms(int status) {
#ifdef _DEBUG_PINS
    printf("TMS: %d\n", inb(PARPORT));
#endif

    if (status)
        outb(inb(PARPORT) | TMS, PARPORT);
    else
        outb(inb(PARPORT) & ~TMS, PARPORT);

#ifdef _DEBUG_PINS
    printf("TMS: %d\n", inb(PARPORT));
#endif

    delay();
}

// -------------------------------------------------------------------

void tck(int status) {
#ifdef _DEBUG_PINS
    printf("TCK: %d\n", inb(PARPORT));
#endif

    if (status)
        outb(inb(PARPORT) | TCK, PARPORT);
    else
        outb(inb(PARPORT) & ~TCK, PARPORT);

#ifdef _DEBUG_PINS
    printf("TCK: %d\n", inb(PARPORT));
#endif

    delay();
}

// -------------------------------------------------------------------

void tdi(int status) {
#ifdef _DEBUG_PINS
    printf("TDI: %d\n", inb(PARPORT));
#endif

    if (status)
        outb(inb(PARPORT) | TDI, PARPORT);
    else
        outb(inb(PARPORT) & ~TDI, PARPORT);

#ifdef _DEBUG_PINS
    printf("TDI: %d\n", inb(PARPORT));
#endif

    delay();
}

// -------------------------------------------------------------------

unsigned int tdo() {
#ifdef _DEBUG_PINS
    printf("TDO: %d\n", inb(PARPORT+1));
#endif

    return (inb(PARPORT+1) & TDO) ? 1 : 0;
}

// -------------------------------------------------------------------

void jtag_set_tap_state(unsigned int bits, int size) {
    int num;

#ifdef _DEBUG_JTAG
    printf("NEW TAP STATE (SIZE %d): ", size);
#endif

    for (num = 0; num < size; num++) {
        tms(bits & 1);

#ifdef _DEBUG_JTAG
        printf("%d", (int) bits & 1);
#endif

        tck(1);
        tck(0);

        bits >>= 1;
    }

#ifdef _DEBUG_JTAG
    printf("\n");
#endif

}

// -------------------------------------------------------------------

void jtag_init(char *name) {
    ioperm(PARPORT, 3, 1);
    outb(LO, PARPORT);
    reset(HI);

    jtag_set_tap_state(0x5fffff, 23);
}

// -------------------------------------------------------------------

unsigned int jtag_set_ir(unsigned int new_ir, int size, int rti) {
    int num, rb;
    unsigned int old_ir = 0;

    rb = size-1;
    jtag_set_tap_state(1, 3);

#ifdef _DEBUG_JTAG
    printf("NEW IR STATE 0x%08X (SIZE %d): ", new_ir, size);
#endif

    for (num = 0; num < size; num++, rb--) {
        tms(0);
        tdi(new_ir & 1);

#ifdef _DEBUG_JTAG
        printf("%d", (int) new_ir & 1);
#endif
        tck(1);
        tck(0);

        old_ir |= (tdo() << (size-rb));
        new_ir >>= 1;
    }

#ifdef _DEBUG_JTAG
    printf(",   RECEIVED: 0x%08X\n", old_ir);
#endif

    if (rti)
    	jtag_set_tap_state(11, 4);
    else
    	jtag_set_tap_state(7, 3);

    return old_ir;
}

// -------------------------------------------------------------------

unsigned int jtag_set_dr(unsigned int new_dr, int size, int rti) {
    int num, rb;
    unsigned int old_dr = 0;

    jtag_set_tap_state(0, 2);

#ifdef _DEBUG_JTAG
    printf("NEW DR STATE 0x%08X (SIZE %d): ", new_dr, size);
#endif

    for (num = 0, rb = 0; num < size; num++, rb++) {
        tms(0);
        tdi(new_dr & 1);

#ifdef _DEBUG_JTAG
        printf("%d", (int) new_dr & 1);
#endif
        tck(1);
        tck(0);

        old_dr |= (tdo() << rb);
        new_dr >>= 1;
    }

#ifdef _DEBUG_JTAG
    printf(",   RECEIVED: 0x%08X\n", old_dr);
#endif

    if (rti)
    	jtag_set_tap_state(11, 4);
    else
    	jtag_set_tap_state(7, 3);

    return old_dr;
}

// -------------------------------------------------------------------

unsigned int *jtag_set_dr_38(unsigned int new_drh, unsigned int new_drl, int rti) {
    int num, rb;
    static unsigned int old_dr[2];

    jtag_set_tap_state(0, 2);
    old_dr[0] = old_dr[1] = 0;

#ifdef _DEBUG_JTAG
    printf("NEW DR STATE 0x%08X%08X (SIZE 38): ", new_drh, new_drl);
#endif

    for (num = 0, rb = 0; num < 32; num++, rb++) {
        tms(0);
        tdi(new_drl & 1);

#ifdef _DEBUG_JTAG
        printf("%d", (int) new_drl & 1);
#endif
        tck(1);
        tck(0);

        old_dr[1] |= (tdo() << rb);
        new_drl >>= 1;
    }

    for (num = 0, rb = 0; num < 6; num++, rb++) {
        tms(0);
        tdi(new_drh & 1);

#ifdef _DEBUG_JTAG
        printf("%d", (int) new_drh & 1);
#endif
        tck(1);
        tck(0);

        old_dr[0] |= (tdo() << rb);
        new_drh >>= 1;
    }

#ifdef _DEBUG_JTAG
    printf(",   RECEIVED: 0x%08X%08X\n", old_dr[0], old_dr[1]);
#endif

    if (rti)
    	jtag_set_tap_state(11, 4);
    else
    	jtag_set_tap_state(7, 3);

    return old_dr;
}

// -------------------------------------------------------------------

unsigned int *jtag_set_dr_96(unsigned int new_dr0, unsigned int new_dr1, unsigned int new_dr2, int rti) {
    int num, rb;
    static unsigned int old_dr[3];

    jtag_set_tap_state(0, 2);
    old_dr[0] = old_dr[1] = 0;

#ifdef _DEBUG_JTAG
    printf("NEW DR STATE 0x%08X%08X%08X (SIZE 38): ", new_dr0, new_dr1, new_dr2);
#endif

    for (num = 0, rb = 0; num < 32; num++, rb++) {
        tms(0);
        tdi(new_dr2 & 1);

#ifdef _DEBUG_JTAG
        printf("%d", (int) new_dr2 & 1);
#endif
        tck(1);
        tck(0);

        old_dr[2] |= (tdo() << rb);
        new_dr2 >>= 1;
    }

    for (num = 0, rb = 0; num < 32; num++, rb++) {
        tms(0);
        tdi(new_dr1 & 1);

#ifdef _DEBUG_JTAG
        printf("%d", (int) new_dr1 & 1);
#endif
        tck(1);
        tck(0);

        old_dr[1] |= (tdo() << rb);
        new_dr1 >>= 1;
    }

    for (num = 0, rb = 0; num < 32; num++, rb++) {
        tms(0);
        tdi(new_dr0 & 1);

#ifdef _DEBUG_JTAG
        printf("%d", (int) new_dr0 & 1);
#endif
        tck(1);
        tck(0);

        old_dr[0] |= (tdo() << rb);
        new_dr0 >>= 1;
    }

#ifdef _DEBUG_JTAG
    printf(",   RECEIVED: 0x%08X%08X%08X\n", old_dr[0], old_dr[1], old_dr[2]);
#endif

    if (rti)
    	jtag_set_tap_state(11, 4);
    else
    	jtag_set_tap_state(7, 3);

    return old_dr;
}

// -------------------------------------------------------------------

unsigned int *jtag_set_dr_n(unsigned int *new_dr, unsigned int *old_dr, int size, int rti) {
    int num, rb, word_num, word, sent;

    jtag_set_tap_state(0, 2);
    
    word_num = size/32 + ((size % 32) ? 1 : 0);
    memset(old_dr, 0, word_num * 4);

#ifdef _DEBUG_JTAG
    printf("NEW DR STATE (SIZE %d): 0x", size);
    for (num = 0; num < word_num; num++) {
        printf("%08X", new_dr[num]);
    }
    printf("\n");
#endif

    for (word = word_num, sent = 0; sent < size; word--)
        for (num = 0, rb = 0; (num < 32) && (sent < size); num++, rb++, sent++) {
            tms(0);
            tdi(new_dr[word-1] & 1);

#ifdef _DEBUG_JTAG
            printf("%d", (int) new_dr[word-1] & 1);
#endif
            tck(1);
            tck(0);

            old_dr[word-1] |= (tdo() << rb);
            new_dr[word-1] >>= 1;
        }
    
#ifdef _DEBUG_JTAG
    printf(",   RECEIVED: 0x");
    for (num = 0; num < word_num; num++) {
        printf("%08X", old_dr[num]);
    }
    printf("\n");
#endif

    if (rti)
    	jtag_set_tap_state(11, 4);
    else
    	jtag_set_tap_state(7, 3);

    return old_dr;
}

