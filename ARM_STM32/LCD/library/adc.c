// ---------------------------------------------------------------------------
// This header file contains the function prototypes for the Analog-Digital
// Converter.
// ---------------------------------------------------------------------------

#include <adc.h>
#include <stm32f10x_adc.h>
#include <stm32f10x_gpio.h>
#include <stm32f10x_rcc.h>

// ---------------------------------------------------------------------------
// This function initializes the A/D converter.
// ---------------------------------------------------------------------------

void adc_init() {
    GPIO_InitTypeDef GPIO_InitStructure;
    ADC_InitTypeDef ADC_InitStructure;
    
    /* Enable ADC1, ADC2 and GPIOC clock */
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_ADC1 | RCC_APB2Periph_ADC2, ENABLE);
    /* ADCCLK = PCLK2/8 = 12 MHz */
    RCC_ADCCLKConfig(RCC_PCLK2_Div8);

    /* Configure PC.00 and PC.01 (ADC Channel10 and 11) as analog input */
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0 | GPIO_Pin_1;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AIN;
    GPIO_Init(GPIOC, &GPIO_InitStructure);

    /* ADC1 configuration --------------------------------------------------*/
    ADC_InitStructure.ADC_Mode = ADC_Mode_Independent;
    ADC_InitStructure.ADC_ScanConvMode = DISABLE;
    ADC_InitStructure.ADC_ContinuousConvMode = DISABLE;
    ADC_InitStructure.ADC_ExternalTrigConv = ADC_ExternalTrigConv_None;
    ADC_InitStructure.ADC_DataAlign = ADC_DataAlign_Right;
    ADC_InitStructure.ADC_NbrOfChannel = 1;
    ADC_Init(ADC1, &ADC_InitStructure);

    /* ADC1 regular channels configuration */
    ADC_RegularChannelConfig(ADC1, ADC_Channel_10, 1, ADC_SampleTime_1Cycles5);

    /* Enable ADC1 */
    ADC_Cmd(ADC1, ENABLE);

    /* Enable ADC1 reset calibaration register */
    ADC_ResetCalibration(ADC1);

    /* Check the end of ADC1 reset calibration register */
    while(ADC_GetResetCalibrationStatus(ADC1));

    /* Start ADC1 calibaration */
    ADC_StartCalibration(ADC1);

    /* Check the end of ADC1 calibration */
    while(ADC_GetCalibrationStatus(ADC1));
}

// -------------------------------------------------------------------------
// Starts A/D conversion.
// -------------------------------------------------------------------------

unsigned int adc_convert() {
    /* Start ADC1 Software Conversion */
    ADC_Cmd(ADC1, ENABLE);

    // ADC_SoftwareStartConvCmd(ADC1, ENABLE);

    /* Check the end of ADC1 calibration */
    while(ADC_GetFlagStatus(ADC1, ADC_FLAG_EOC) == 0);
    
    ADC_ClearFlag(ADC1, ADC_FLAG_EOC);

    return ADC_GetConversionValue(ADC1) & 4095;
}

