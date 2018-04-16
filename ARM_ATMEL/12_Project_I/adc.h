#ifndef __ADC_H__
#define __ADC_H__

inline void adc_init() {
    AT91F_PIO_CfgPullup(AT91C_BASE_PIOA, 1 << 17);
    AT91F_PIO_CfgPullup(AT91C_BASE_PIOA, 1 << 18);
    AT91F_PIO_CfgPullup(AT91C_BASE_PIOA, 1 << 19);

    AT91F_ADC_CfgPMC();

    // AT91F_ADC_CfgModeReg( (1 << 8) | (100 << 16) | (3 << 24));
    AT91F_ADC_CfgTimings(AT91C_BASE_ADC, 20, 5, 200, 600);
    AT91F_ADC_EnableChannel(AT91C_BASE_ADC, (1 << 0) | (1 << 1) | (1 << 2) | (1 << 5) | (1 << 6) | (1 << 7));
}

inline void adc_start_conversion() {
    // AT91F_ADC_SoftReset(AT91C_BASE_ADC);
    AT91F_ADC_StartConversion(AT91C_BASE_ADC);
}

inline unsigned int adc_get_value(int channel) {
    switch (channel) {
        case 0:
            while (!(AT91F_ADC_GetStatus(AT91C_BASE_ADC) & (1 << 0)));
            return AT91F_ADC_GetConvertedDataCH0(AT91C_BASE_ADC);
        case 1:
            while (!(AT91F_ADC_GetStatus(AT91C_BASE_ADC) & (1 << 1)));
            return AT91F_ADC_GetConvertedDataCH1(AT91C_BASE_ADC);
        case 2:
            while (!(AT91F_ADC_GetStatus(AT91C_BASE_ADC) & (1 << 2)));
            return AT91F_ADC_GetConvertedDataCH2(AT91C_BASE_ADC);
        case 5:
            while (!(AT91F_ADC_GetStatus(AT91C_BASE_ADC) & (1 << 5)));
            return AT91F_ADC_GetConvertedDataCH5(AT91C_BASE_ADC);
        case 6:
            while (!(AT91F_ADC_GetStatus(AT91C_BASE_ADC) & (1 << 6)));
            return AT91F_ADC_GetConvertedDataCH6(AT91C_BASE_ADC);
        case 7:
            while (!(AT91F_ADC_GetStatus(AT91C_BASE_ADC) & (1 << 7)));
            return AT91F_ADC_GetConvertedDataCH7(AT91C_BASE_ADC);
        default:
            return 0;
    }
}

#endif
