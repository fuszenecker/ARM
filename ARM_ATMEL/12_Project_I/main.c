/* ----------------------------------------------------------------- *
 * This program is free software. You can distribute/modify it under *
 * the terms of GNU General Public License 3.                        *
 * The program has been written by                                   *
 *                                                                   *
 *             Robert Fuszenecker <hg8lhs@gmail.com>                 *
 *                                                                   *
 * in 2007.                                                          *
 * ----------------------------------------------------------------- */

#define __inline    inline

#define IRQ_FLAG            0x80
#define FIQ_FLAG            0x40
#define THUMB_FLAG          0x20

#define USER_MODE           0x10
#define FIQ_MODE            0x11
#define IRQ_MODE            0x12
#define SUPERVISOR_MODE     0x13
#define ABORT_MODE          0x17
#define UNDEF_MODE          0x1b
#define SYSTEM_MODE         0x1f

#define IRQ_STACK_SIZE      1024
#define FIQ_STACK_SIZE      IRQ_STACK_SIZE

#define OSC_DELAY           500
#define ADC_MUL             17.87

#define MAX_OL_TIME         250         /* ms, time of overload before switching off the channel */

#define T0                  1.0
#define Ti                  10.0
#define PI_MUL              (1024 / PWM_PERIOD)

void  _start()  __attribute__((naked));
void  _stop()   __attribute__((naked));
int   main()    __attribute__((naked));
void  fiq()     __attribute__((interrupt("FIQ")));
void  irq()     __attribute__((interrupt("IRQ")));

void _start() {
    asm("b main");
    asm("b _stop");
    asm("b _stop");
    asm("b _stop");
    asm("b _stop");
    asm("b _stop");
    asm("ldr pc, [pc, #-0xF20]");
//    asm("b irq");
    asm("b fiq");
}

void _stop() {
    for(;;);
}

#include <stdlib.h>
#include "AT91SAM7S.h"
#include "lib_AT91SAM7S.h"
#include "messages.h"
#include "report.h"
#include "ports.h"
#include "dbgu.h"
#include "commands.h"
#include "pwm.h"
#include "adc.h"
#include "intr.h"

void ports_init() {
    unsigned int outputs =
        (1 << ERROR_LED) |
        (1 << OK_LED) |
        (1 << IRQ_LED) |
        (1 << PWR1_LED) |
        (1 << PWR2_LED) |
        (1 << PWR3_LED) |
        (1 << PWM1) |
        (1 << PWM2) |
        (1 << PWM3);

    AT91F_PIO_CfgDirectDrive(AT91C_BASE_PIOA, outputs);
    AT91F_PIO_CfgOutput(AT91C_BASE_PIOA, outputs);
    AT91F_PIO_ClearOutput(AT91C_BASE_PIOA, outputs);
}

struct {
    int reference;
    int current_limit;
    int analog0;
    int analog1;
    int ui;
    int over;
} power_supply[3] = {
                        {1, 1, 1, 1, 1}, 
                        {1, 1, 1, 1, 1}, 
                        {1, 1, 1, 1, 1}};

int main() {
    struct Packet packet;
    int value;

    // r0 = End_of_RAM
    asm("mov r0, %0" :: "i" (AT91C_ISRAM));
    asm("add r0, r0, %0" :: "i" (AT91C_ISRAM_SIZE));

    // IRQ_stack_pointer = End_of_RAM
    asm("mov r1, %0" :: "i" (IRQ_MODE | IRQ_FLAG | FIQ_FLAG));
    asm("msr cpsr, r1");
    asm("mov sp, r0");

    // FIQ_stack_pointer = End_of_RAM - IRQ_stack_size = r0 - IRQ_stack_size
    asm("sub r0, r0, %0" :: "i" (IRQ_STACK_SIZE));
    asm("mov r1, %0" :: "i" (FIQ_MODE | IRQ_FLAG | FIQ_FLAG));
    asm("msr cpsr, r1");
    asm("mov sp, r0");

    // System_mode_stack_pointer = End_of_RAM - IRQ_stack_size - FIQ_stack_size =
    // = FIQ_pointer - FIQ_stack_size
    asm("sub r0, r0, %0" :: "i" (FIQ_STACK_SIZE));
    asm("mov r1, %0" :: "i" (SYSTEM_MODE | IRQ_FLAG | FIQ_FLAG));
    asm("msr cpsr, r1");
    asm("mov sp, r0");

    // Disable WDT
    AT91F_WDTSetMode(AT91C_BASE_WDTC, AT91C_WDTC_WDDIS);

    // Enable RESET pin :)
    // AT91F_RSTSetMode(AT91C_BASE_RSTC, AT91C_RSTC_URSTEN);

    // Switch on Quartz oscillator 
    AT91F_CKGR_CfgMainOscillatorReg(AT91C_BASE_CKGR, OSC_DELAY << 8 | AT91C_CKGR_MOSCEN);

    // Waiting for Main Clock to be stable
    while (!(AT91F_CKGR_GetMainClockFreqReg(AT91C_BASE_CKGR) & AT91C_CKGR_MAINRDY));

    // Change to Quartz oscillator
    AT91F_PMC_CfgMCKReg(AT91C_BASE_PMC, AT91C_PMC_CSS_MAIN_CLK);

    // Configure PLL
    // PLL base = 20 MHz / 20 = 1 MHz
    // PLL freq = 120 * PLL base / 2 = 60 MHz
    // AT91F_CKGR_CfgPLLReg(AT91C_BASE_CKGR, (120 << 16) | 20);
    // AT91F_PMC_CfgMCKReg(AT91C_BASE_PMC, AT91C_PMC_CSS_PLL_CLK | AT91C_PMC_PRES_CLK_2);

    ports_init();

    AT91F_PIO_SetOutput(AT91C_BASE_PIOA, 1 << PWR1_LED);

    dbgu_init();
    
    AT91F_PIO_SetOutput(AT91C_BASE_PIOA, 1 << PWR2_LED);

    pwm_init(PWM_PERIOD);

    power_supply[0].current_limit = 1000.0 / ADC_MUL;
    power_supply[1].current_limit = 1000.0 / ADC_MUL;
    power_supply[2].current_limit = 1000.0 / ADC_MUL;

    power_supply[0].over = 0;
    power_supply[1].over = 0;
    power_supply[2].over = 0;

    power_supply[0].reference = 1000 * 12 / ADC_MUL;
    power_supply[1].reference = 1000 * 5 / ADC_MUL;
    power_supply[2].reference = 1000 * 3.3 / ADC_MUL;
    
    adc_init();
    intr_init();
    
    AT91F_PIO_SetOutput(AT91C_BASE_PIOA, 1 << PWR3_LED);

    report_ready();

    while (1) {

        dbgu_recv_packet(&packet);

        switch (packet.command >> COMM_SHIFT) {
            case COMM_HELLO:
                packet.param = 0x5a;
                dbgu_send_packet(&packet);
                break;
            case COMM_GET_TYPE:
                packet.param = TYPE_POWER_SUPPLY;
                dbgu_send_packet(&packet);
                break;
            case COMM_SET_OUTPUT_VALUE:
                value = ((packet.command & ((1 << COMM_SHIFT) - 1)) << 8) + packet.param;
                packet.param = 0x5a;
                dbgu_send_packet(&packet);
                
                power_supply[packet.dst].reference = (value * 100) / ADC_MUL;

                switch (packet.dst) {
                    case 0:
                        AT91F_PIO_SetOutput(AT91C_BASE_PIOA, (1 << PWR1_LED));
                        break;
                    case 1:
                        AT91F_PIO_SetOutput(AT91C_BASE_PIOA, (1 << PWR2_LED));
                        break;
                    case 2:
                        AT91F_PIO_SetOutput(AT91C_BASE_PIOA, (1 << PWR3_LED));
                        break;
                }

                break;
            case COMM_GET_OUTPUT_VALUE:
                value = (power_supply[packet.dst].reference * ADC_MUL) / 100;
                packet.command |= (value >> 8) & ((1 << COMM_SHIFT) - 1);
                packet.param = value & 0xff;
                dbgu_send_packet(&packet);
                break;
            case COMM_SET_CURRENT_LIMIT:
                value = ((packet.command & ((1 << COMM_SHIFT) - 1)) << 8) + packet.param;
                packet.param = 0x5a;
                dbgu_send_packet(&packet);
                power_supply[packet.dst].current_limit = value / ADC_MUL;
                break;
            case COMM_GET_CURRENT_LIMIT:
                value = power_supply[packet.dst].current_limit * ADC_MUL;
                packet.command |= (value >> 8) & ((1 << COMM_SHIFT) - 1);
                packet.param = value & 0xff;
                dbgu_send_packet(&packet);
                break;
            case COMM_GET_ANALOG0:
                value = power_supply[packet.dst].analog0 * ADC_MUL / 100;
                packet.command |= (value >> 8) & ((1 << COMM_SHIFT) - 1);
                packet.param = value & 0xff;
                dbgu_send_packet(&packet);
                break;
            case COMM_GET_ANALOG1:
                value = power_supply[packet.dst].analog1 * ADC_MUL / 100;
                packet.command |= (value >> 8) & ((1 << COMM_SHIFT) - 1);
                packet.param = value & 0xff;
                dbgu_send_packet(&packet);
                break;
        }
    }
   
    return 0;
}

void fiq() {
}

int dummy = 1;                      // It makes PWM intr. circuit relax

void irq() {
    int channel;
        
    AT91F_PIO_SetOutput(AT91C_BASE_PIOA, 1 << IRQ_LED);

    adc_start_conversion();
    
    power_supply[0].analog0 = adc_get_value(0);
    power_supply[1].analog0 = adc_get_value(1);
    power_supply[2].analog0 = adc_get_value(2);
    
    power_supply[0].analog1 = adc_get_value(5);
    power_supply[1].analog1 = adc_get_value(6);
    power_supply[2].analog1 = adc_get_value(7);

    for (channel = 0; channel < 3; channel++) {
        if (abs(power_supply[channel].analog0 - power_supply[channel].analog1) > power_supply[channel].current_limit) {
 
            power_supply[channel].over++;

            if (power_supply[channel].over == MAX_OL_TIME) {
                power_supply[channel].reference = 0;

                switch (channel) {
                    case 0:
                        AT91F_PIO_ClearOutput(AT91C_BASE_PIOA, (1 << PWR1_LED));
                        break;
                    case 1:
                        AT91F_PIO_ClearOutput(AT91C_BASE_PIOA, (1 << PWR2_LED));
                        break;
                    case 2:
                        AT91F_PIO_ClearOutput(AT91C_BASE_PIOA, (1 << PWR3_LED));
                        break;
                }
            }
        } else power_supply[channel].over = 0;


        /* I-alg. */

        power_supply[channel].ui += (/* T0 / Ti * */ (power_supply[channel].reference - power_supply[channel].analog1) >> 2);

        if (power_supply[channel].ui < 50)
            power_supply[channel].ui = 50;

        if (power_supply[channel].ui > 1023)
            power_supply[channel].ui = 1023;

        pwm_set_value(channel, power_supply[channel].ui / (PI_MUL));
    }
    
    dummy = *AT91C_PWMC_ISR;
    AT91F_AIC_AcknowledgeIt(AT91C_BASE_AIC);
    AT91F_PIO_ClearOutput(AT91C_BASE_PIOA, 1 << IRQ_LED);
}
