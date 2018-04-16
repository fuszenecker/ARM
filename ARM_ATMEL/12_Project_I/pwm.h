#ifndef __PWM_H__
#define __PWM_H__

#define DEFAULT_PWM_MODE    0 /* | AT91C_PWMC_CPOL */   /* f_clock = MCK, left aligned, 
                                                           period starts at high level,
                                                           CUPD modifies period */
#define PWM_PERIOD          512

inline void pwm_init(unsigned int period) {
    AT91F_PIO_CfgPeriph(AT91C_BASE_PIOA, 0, AT91C_PA11_PWM0);
    AT91F_PIO_CfgPeriph(AT91C_BASE_PIOA, 0, AT91C_PA12_PWM1);
    AT91F_PIO_CfgPeriph(AT91C_BASE_PIOA, 0, AT91C_PA13_PWM2);

    AT91F_PWMC_CfgPMC();            // Enable perif. clock.
 
    *AT91C_PWMC_MR = 0;             // Prescaler turned off

    AT91F_PWMC_CfgChannel(AT91C_BASE_PWMC, 0, DEFAULT_PWM_MODE, period, 0);
    AT91F_PWMC_CfgChannel(AT91C_BASE_PWMC, 1, DEFAULT_PWM_MODE, period, 0);
    AT91F_PWMC_CfgChannel(AT91C_BASE_PWMC, 2, DEFAULT_PWM_MODE, period, 0);

    AT91F_PWMC_StartChannel(AT91C_BASE_PWMC, 0x7);  // Enebles Channel 0, 1, 2
}

inline void pwm_set_value(int id, int duty_value) {
    AT91F_PWMC_UpdateChannel(AT91C_BASE_PWMC, id, duty_value);
}

#endif
