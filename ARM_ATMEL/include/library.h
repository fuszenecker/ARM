#ifndef __macros_h
#define __macros_h

// --------------------------------------------------------------------------------------
// How to use a register variable:
// register unsigned int stack_pointer asm ("r0");
// stack_pointer =  0xdf;
// --------------------------------------------------------------------------------------

// --------------------------------------------------------------------------------------
// Definitions
// --------------------------------------------------------------------------------------

#define RAM_SIZE                 "8*1024"
#define IRQ_STACK_SIZE          "256"

// --------------------------------------------------------------------------------------
// Prototypes for main() and irq() functions 
// Permissible values for this parameter are: IRQ, FIQ, SWI, ABORT and UNDEF.
// --------------------------------------------------------------------------------------

#define PROTO_IRQ()             void irq(void) __attribute__ ((interrupt ("IRQ")));
#define PROTO_FIQ()             void irq(void) __attribute__ ((interrupt ("FIQ")));
#define PROTO_SWI()             void irq(void) __attribute__ ((interrupt ("SWI")));
#define PROTO_ABORT()           void irq(void) __attribute__ ((interrupt ("ABORT")));
#define PROTO_UNDEF()           void irq(void) __attribute__ ((interrupt ("UNDEF")));
#define PROTO_MAIN()            int main(void) __attribute__ ((noreturn)) __attribute__ ((naked));
#define INLINE                  inline

// --------------------------------------------------------------------------------------
// Set up the stack for main program, IRQ and FIQ (Fast IRQ)
// --------------------------------------------------------------------------------------

#define SETUP_STACKS()                          \
            /* IRQ stack */                     \
            asm("mov r0, #0xd2");               \
            asm("msr cpsr, r0");                \
            asm("mov r1, #" RAM_SIZE);          \
            asm("mov r13, r1");                 \
            asm("mov r7, r1");                  \
                                                \
            /* Main program stack */            \
            asm("mov r0, #0xdf");               \
            asm("msr cpsr, r0");                \
            asm("sub r2, #" IRQ_STACK_SIZE);    \
            asm("mov r13, r1");                 \
            asm("mov r7, r1");

//#define SETUP_STACKS_OLD()              \
            /* FIQ stack */             \
            asm("mov r0, #0xd1");       \
            asm("msr cpsr, r0");        \
            asm("mov r13, #0x200000");  \
            asm("add r13, r13, #7168"); \
            asm("sub r13, r13, #4");    \
            asm("mov r7, r13");         \
                                        \
            /* IRQ stack */             \
            asm("mov r0, #0xd2");       \
            asm("msr cpsr, r0");        \
            asm("mov r13, #0x200000");  \
            asm("add r13, r13, #7168"); \
            asm("sub r13, r13, #4");    \
            asm("mov r7, r13");         \
                                        \
            /* Main program stack */    \
            asm("mov r0, #0xdf");       \
            asm("msr cpsr, r0");        \
            asm("mov r13, #0x200000");  \
            asm("add r13, r13, #8192"); \
            asm("sub r13, r13, #4");    \
            asm("mov r7, r13");

// --------------------------------------------------------------------------------------
// Disable WDT, which is switched ON by default!!!
// --------------------------------------------------------------------------------------

void INLINE disable_wdt() {
    *AT91C_WDTC_WDMR = AT91C_WDTC_WDDIS;
}

// --------------------------------------------------------------------------------------
// Set desired ports as OUTPUT (with pull-up FET-s, without multiplexing
// Parameter: port mask (binary, '1' is output, '0' is input)
// --------------------------------------------------------------------------------------

void INLINE setup_out_ports(int x) {
    *AT91C_PIOA_PER = x;
    *AT91C_PIOA_OER = x;

    *AT91C_PIOA_PPUER = x;
    *AT91C_PIOA_MDDR = x;
    *AT91C_PIOA_CODR = x;
}

// --------------------------------------------------------------------------------------
// Set and clear outputs
// Parameter: portmask, binary
// --------------------------------------------------------------------------------------

void INLINE out_set(int x) {
    *AT91C_PIOA_SODR = x;
}

void INLINE out_clear(int x) {
    *AT91C_PIOA_CODR = x;
}

void INLINE out_clear_all() {
    *AT91C_PIOA_CODR = 0xffffffff;
}

// --------------------------------------------------------------------------------------
// Switch on QUARTZ oscillator
// --------------------------------------------------------------------------------------

void INLINE setup_quartz_osc() {
    *AT91C_CKGR_MOR = AT91C_CKGR_OSCOUNT | AT91C_CKGR_MOSCEN;

    while (!(*AT91C_PMC_SR & AT91C_PMC_MOSCS));

    *AT91C_PMC_MCKR = AT91C_PMC_CSS_MAIN_CLK | AT91C_PMC_PRES_CLK;

    *AT91C_PMC_PCER = 0xffffffff;
}

// --------------------------------------------------------------------------------------
// Switch on PLL (using Quartz oscillator)
// Parameters: MUL: PLL multiplier, DIV: PLL divider
// Output frequency is: f = quartz_osc_freq * MUL / DIV
// --------------------------------------------------------------------------------------

void INLINE setup_pll(int mul, int div) {
    *AT91C_CKGR_MOR = AT91C_CKGR_OSCOUNT | AT91C_CKGR_MOSCEN;

    while (!(*AT91C_PMC_SR & AT91C_PMC_MOSCS));

    *AT91C_CKGR_PLLR = AT91C_CKGR_USBDIV_1
        | (63 << 8) /* slow clock number */
        | ((mul) << 16) /* MUL */
        | (div) /* DIV */;

    while (!(*AT91C_PMC_SR & AT91C_PMC_LOCK));

    *AT91C_PMC_MCKR = AT91C_PMC_PRES_CLK;

    while (!(*AT91C_PMC_SR & AT91C_PMC_MCKRDY));

    *AT91C_PMC_MCKR = AT91C_PMC_CSS_PLL_CLK | AT91C_PMC_PRES_CLK;

    *AT91C_PMC_PCER = 0xffffffff;
}

// --------------------------------------------------------------------------------------
// Enable and disable hardware interrupts (both IRQ and FIQ)
// --------------------------------------------------------------------------------------

void INLINE enable_interrupts() {
    asm("mov r0, #0x5f");
    asm("msr cpsr, r0");
}

void INLINE disable_interrupts() {
    asm("mov r0, #0xdf");
    asm("msr cpsr, r0");
    asm("mov r0, #0xdf");
    asm("msr cpsr, r0");
}

// --------------------------------------------------------------------------------------
// Acknowlrdges an interrupt, use this macro at the end of the interrupt service rutine
// --------------------------------------------------------------------------------------

int INLINE acknowledge_interrupt(int id) {
    int return_value = *AT91C_AIC_IVR;
    *AT91C_AIC_EOICR = id;
    return return_value;
}

// --------------------------------------------------------------------------------------
// Sets up USART 0
// Parameter: Baud rate divisor: 120 -> 9600 bit/s, 30 -> 38400 bit/s, 960 -> 1200 bit/s
// --------------------------------------------------------------------------------------

void INLINE setup_usart0(int baud_rate_divisor) {
    // Initialises ports (PA5 and PA6)
    *AT91C_PIOA_OER = AT91C_PA6_TXD0;
    *AT91C_PIOA_ODR = AT91C_PA5_RXD0;
    *AT91C_PIOA_PDR = AT91C_PA6_TXD0 | AT91C_PA5_RXD0;
    *AT91C_PIOA_PPUER = AT91C_PIO_PA5 | AT91C_PIO_PA6;
    *AT91C_PIOA_MDDR = AT91C_PA6_TXD0 | AT91C_PA5_RXD0;
    *AT91C_PIOA_ASR = AT91C_PIO_PA5 | AT91C_PIO_PA6;

    // Resets the transmitter and the receiver, clears status bits
    *AT91C_US0_CR = AT91C_US_RSTRX | AT91C_US_RSTTX 
        | AT91C_US_RXDIS | AT91C_US_TXDIS;

    // Sets the baud rate generator's divisor
    *AT91C_US0_BRGR = baud_rate_divisor;

    // Sets 8 bit long characters, no parity, 1 stop bit
    *AT91C_US0_MR = AT91C_US_USMODE_NORMAL 
        | AT91C_US_CLKS_CLOCK 
        | AT91C_US_CHRL_8_BITS  
        | AT91C_US_PAR_NONE 
        | AT91C_US_NBSTOP_1_BIT;

    // (Re)Enables the transmitter and the receiver
    *AT91C_US0_CR = AT91C_US_RXEN | AT91C_US_TXEN;
}

// --------------------------------------------------------------------------------------
// Sends a character (ch's last 8 bit) through USART0
// --------------------------------------------------------------------------------------

void INLINE put_char_usart0(int ch) {
    // Is there anything in the output shift register?
    while (!(*AT91C_US0_CSR & AT91C_US_TXRDY));

    // Send!
    *AT91C_US0_THR = ch & 0xff;
}

// --------------------------------------------------------------------------------------
// Receives a character (return values's last 8 bit) through USART0
// --------------------------------------------------------------------------------------

int INLINE recv_char_usart0() {
    // If there is nothing to receive, then we have to wait...
    while (!(*AT91C_US0_CSR & AT91C_US_RXRDY));

    // And then we give back the result
    return (*AT91C_US0_RHR & 0xff);
}

// --------------------------------------------------------------------------------------
// Receives a character (return values's last 8 bit) thiough USART0
// NON-BLOCKING version
// --------------------------------------------------------------------------------------

int INLINE recv_char_usart0_nb() {
    // If there is something in the input register...
    if (*AT91C_US0_CSR & AT91C_US_RXRDY)
        // the we return with it's value
        return (*AT91C_US0_RHR & 0xff);
    else
        // else we give back an error code
        return 1024;
}

// --------------------------------------------------------------------------------------

#endif

