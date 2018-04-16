#ifndef __macros_h
#define __macros_h

// --------------------------------------------------------------------------------------
// How to use register variable:
// register unsigned int stack_pointer asm ("r0");
// stack_pointer =  0xdf;
// --------------------------------------------------------------------------------------

// --------------------------------------------------------------------------------------
// Prototypes for main() and irq() functions 
// Permissible values for this parameter are: IRQ, FIQ, SWI, ABORT and UNDEF.
// --------------------------------------------------------------------------------------

#define PROTO_IRQ()             void irq(void) __attribute__ ((interrupt ("IRQ")));
#define PROTO_NAKED_MAIN()      int main(void) __attribute__ ((naked));

// --------------------------------------------------------------------------------------
// Set up the stack for main program, IRQ and FIQ (Fast IRQ)
// --------------------------------------------------------------------------------------

#define SETUP_STACKS()          \
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

#define DISABLE_WDT()                       \
            *AT91C_WDTC_WDMR = AT91C_WDTC_WDDIS;

// --------------------------------------------------------------------------------------
// Set desired ports as OUTPUT (with pull-up FET-s, without multiplexing
// Parameter: port mask (binary, '1' is output, '0' is input)
// --------------------------------------------------------------------------------------

#define SETUP_OUT_PORTS(x)                  \
            *AT91C_PIOA_PER = (x);          \
            *AT91C_PIOA_OER = (x);          \
                                            \
            *AT91C_PIOA_PPUER = (x);        \
            *AT91C_PIOA_MDDR = 0x00000000;  \
            *AT91C_PIOA_CODR = (x);

// --------------------------------------------------------------------------------------
// Set and clear outputs
// Parameter: portmask, binary
// --------------------------------------------------------------------------------------

#define OUT_SET(x)               *AT91C_PIOA_SODR = (x);
#define OUT_CLEAR(x)             *AT91C_PIOA_CODR = (x);
#define OUT_CLEAR_ALL()          *AT91C_PIOA_CODR = (0xffffffff);

// --------------------------------------------------------------------------------------
// Switch on QUARTZ oscillator
// --------------------------------------------------------------------------------------

#define SETUP_QUARTZ_OSC()                                                  \
            *AT91C_CKGR_MOR = AT91C_CKGR_OSCOUNT | AT91C_CKGR_MOSCEN;       \
            while (!(*AT91C_PMC_SR & AT91C_PMC_MOSCS));                     \
            *AT91C_PMC_MCKR = AT91C_PMC_CSS_MAIN_CLK | AT91C_PMC_PRES_CLK;

// --------------------------------------------------------------------------------------
// Switch on PLL (using Quartz oscillator)
// Parameters: MUL: PLL multiplier, DIV: PLL divider
// Output frequency is: f = quartz_osc_freq * MUL / DIV
// --------------------------------------------------------------------------------------

#define SETUP_PLL(MUL, DIV)                                                 \
            *AT91C_CKGR_MOR = AT91C_CKGR_OSCOUNT | AT91C_CKGR_MOSCEN;       \
            while (!(*AT91C_PMC_SR & AT91C_PMC_MOSCS));                     \
                                                                            \
            *AT91C_CKGR_PLLR = AT91C_CKGR_USBDIV_1                          \
                | (63 << 8) /* slow clock number */                         \
                | ((MUL) << 16) /* MUL */                                   \
                | (DIV) /* DIV */;                                          \
            while (!(*AT91C_PMC_SR & AT91C_PMC_LOCK));                      \
                                                                            \
            *AT91C_PMC_MCKR = AT91C_PMC_PRES_CLK;                           \
            while (!(*AT91C_PMC_SR & AT91C_PMC_MCKRDY));                    \
                                                                            \
            *AT91C_PMC_MCKR = AT91C_PMC_CSS_PLL_CLK | AT91C_PMC_PRES_CLK;

// --------------------------------------------------------------------------------------
// Enable and disable hardware interrupts (both IRQ and FIQ)
// --------------------------------------------------------------------------------------

#define ENABLE_INTERRUPTS()                                                 \
            asm("mov r0, #0x1f");                                           \
            asm("msr cpsr, r0");

#define DISABLE_INTERRUPTS()                                                \
            asm("mov r0, #0xdf");                                           \
            asm("msr cpsr, r0");

// --------------------------------------------------------------------------------------
// Acknowlrdges an interrupt, use this macro at the end of the interrupt service rutine
// --------------------------------------------------------------------------------------

#define ACKNOWLEDGE_INTERRUPT()                                             \
            *AT91C_AIC_EOICR = 0xffffffff;

// --------------------------------------------------------------------------------------

#endif

