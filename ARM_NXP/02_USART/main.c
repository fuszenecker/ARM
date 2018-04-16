#include "lpc2103.h"
#include "../LPC210x/library.h"

PROTO_MAIN();
PROTO_IRQ();

#define LINE_FEED 0xA
#define CARRAIGE_RET 0xD

/*************** System Initialization ***************/
void Initialize()
{
        /* Initialize Pin Select Block for Tx and Rx */
        PINSEL0=0x5;
        /* Enable FIFO's and reset them */
        U0FCR=0x7;
        /* Set DLAB and word length set to 8bits */
        U0LCR=0x83;
        /* Baud rate set to 9600 */
        U0DLL=20;
        U0DLM=0;
        /* Clear DLAB */
        U0LCR=0x3;
}
/*********************************************************/

int i = 3;
char c[]="Philips LPC";

int main() {
    SETUP_STACKS();

    // setup_usart0(12000000/16/9600);

    Initialize();

    /* Print forever */
    while(1) {
        while(!(U0LSR & 1));
        U0THR = U0RBR;

        /* Wait till U0THR and U0TSR are both empty */
        while(!(U0LSR & (1 << 6)));
    }
}

void irq() {
}
