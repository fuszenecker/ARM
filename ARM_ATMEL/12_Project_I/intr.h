#ifndef __INTR_H__
#define _INTR_H__

#define INTR_DEFAULT_CV     (0xffff - 20000)

void intr_init() {
    AT91F_AIC_Open(AT91C_BASE_AIC, irq, fiq, /* def. irq */ irq, (void *) 0, 0);

    AT91F_PWMC_CfgPMC();
    AT91F_PWMC_CfgChannel(AT91C_BASE_PWMC, 3, 7, 150, 1);
    AT91F_PWMC_InterruptEnable(AT91C_BASE_PWMC, (1 << 3));

    // *(AT91C_AIC_SMR + AT91C_ID_PWMC) = 2;
    // *AT91C_AIC_IECR = 1 << AT91C_ID_PWMC;
    AT91F_AIC_ConfigureIt(AT91C_BASE_AIC, AT91C_ID_PWMC, AT91C_AIC_PRIOR_LOWEST, AT91C_AIC_SRCTYPE_HIGH_LEVEL, irq);
    // *AT91C_AIC_IECR = 1 << AT91C_ID_TC0;
    // AT91F_AIC_EnableIt(AT91C_BASE_AIC, AT91C_ID_TC0);
    AT91F_AIC_EnableIt(AT91C_BASE_AIC, AT91C_ID_PWMC);

    AT91F_PWMC_StartChannel(AT91C_BASE_PWMC, (1 << 3));

    // Enable interrupts in CPU
    asm("mov r1, %0" :: "i" (SYSTEM_MODE));
    asm("msr cpsr, r1");
}

#endif
