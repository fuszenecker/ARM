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

#define RAM_BASE                "0x40000000"
#define RAM_SIZE                "0x800"
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

// --------------------------------------------------------------------------------------
// Set up the stack for main program, IRQ and FIQ (Fast IRQ)
// --------------------------------------------------------------------------------------

#define SETUP_STACKS()                  \
    /* IRQ stack */                     \
    asm("mov r0, #0xd2");               \
    asm("msr cpsr, r0");                \
    asm("mov r1, #" RAM_BASE);          \
    asm("add r1, #" RAM_SIZE);          \
    asm("mov r13, r1");                 \
    asm("mov r7, r1");                  \
                                        \
    /* Main program stack */            \
    asm("mov r0, #0xdf");               \
    asm("msr cpsr, r0");                \
    asm("sub r2, #" IRQ_STACK_SIZE);    \
    asm("mov r13, r1");                 \
    asm("mov r7, r1");

// --------------------------------------------------------------------------------------
// Switch on PLL (using Quartz oscillator)
// Parameters: MUL: PLL multiplier, DIV: PLL divider
// Output frequency is: f = quartz_osc_freq * (MUL+1) / DIV
// Use like this: "setup_pll(4, 1);"
// --------------------------------------------------------------------------------------

void inline setup_pll(int mul, int div);

// --------------------------------------------------------------------------------------
// Enable and disable hardware interrupts (both IRQ and FIQ)
// --------------------------------------------------------------------------------------

void inline enable_interrupts();
void inline disable_interrupts();

// --------------------------------------------------------------------------------------
// Acknowlrdges an interrupt, use this macro at the end of the interrupt service rutine
// --------------------------------------------------------------------------------------

void inline acknowledge_interrupt();

// --------------------------------------------------------------------------------------
// Sets up USART 0
// Parameter: Baud rate divisor: 120 -> 9600 bit/s, 30 -> 38400 bit/s, 960 -> 1200 bit/s
// --------------------------------------------------------------------------------------

void inline setup_usart0(unsigned int baud_rate_divisor);

// --------------------------------------------------------------------------------------
// Sends a character (ch's last 8 bit) through USART0
// --------------------------------------------------------------------------------------

void inline send_char_usart0(int ch);

// --------------------------------------------------------------------------------------
// Receives a character (return values's last 8 bit) through USART0
// --------------------------------------------------------------------------------------

int inline recv_char_usart0();

// --------------------------------------------------------------------------------------
// Receives a character (return values's last 8 bit) thiough USART0
// NON-BLOCKING version
// --------------------------------------------------------------------------------------

int inline recv_char_usart0_nb();

// --------------------------------------------------------------------------------------
// TopenRing-RS232 Packer format
// --------------------------------------------------------------------------------------

struct Packet {
    unsigned char dst_id;
    unsigned char src_id;
    unsigned char command;
    unsigned char chsum;
    unsigned int data;
};

// --------------------------------------------------------------------------------------
// Sends a TR-RS232 raw packet. The packet has to be prepared!
// --------------------------------------------------------------------------------------

int send_packet(struct Packet *packet);

// --------------------------------------------------------------------------------------
// Detects if any TR-RS232 packet is in the FIFO
// --------------------------------------------------------------------------------------

int detect_packet();

// --------------------------------------------------------------------------------------
// Intelligently receives (and preprocesses) a packet
// --------------------------------------------------------------------------------------
// Return values:
// -1: invalid packet checksum
// 0: nothing happened
// 1: command packet received
// 2: answer packet received
// 3: packet has been forwarded
// --------------------------------------------------------------------------------------

int receive_packet(struct Packet *packet, unsigned char my_id);

// --------------------------------------------------------------------------------------
// Updates checksum field in thenTR-RS232 packet
// --------------------------------------------------------------------------------------

void calc_checksum(struct Packet *packet);

// --------------------------------------------------------------------------------------
// Sets the average value on pin MAT2.0 (PWM output)
// --------------------------------------------------------------------------------------

void inline set_pwm_00(int value, int period);
void inline set_pwm_20(int value, int period);

// --------------------------------------------------------------------------------------
// Get analog value from ADC0.3
// --------------------------------------------------------------------------------------

int get_adc3();

// --------------------------------------------------------------------------------------
// 7-segment display, definitions and control function
// The function inserts the (decimal) digit before the first digit of the display, 
// other digits will be shifted right.
// Non-decinal digits are displayed as
//      10: '-' sign 
//      11: 'F' sign
//      12: 'E' sign
//      13: 'U' sign
//      14: 'n' sign
// --------------------------------------------------------------------------------------

#define     CLK     (1 << 24)       // PIN P0.24
#define     SERIN   (1 << 23)       // PIN P0.23
#define     LATCH   (1 << 22)       // PIN P0.22

#define D_A     0x10                // Values for segments of the display
#define D_B     0x01                // See also: schematic (IO.sch)
#define D_C     0x04
#define D_D     0x08
#define D_E     0x80
#define D_F     0x20
#define D_G     0x02
#define D_DOT   0x40                // Not used in this function

void display_num(char num);
void display_num_nl(char num);      // Non-latching version

#endif

