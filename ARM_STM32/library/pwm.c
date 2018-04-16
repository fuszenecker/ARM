#include <pwm.h>

TIM_TimeBaseInitTypeDef TIM_TimeBaseStructure;
TIM_OCInitTypeDef TIM_OCInitStructure;

void pwm_init(unsigned int clock_division, unsigned int prescaler, unsigned int period) {
    /* TIM1, GPIOA and GPIOB clock enable */
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM1 | RCC_APB2Periph_GPIOA |
                         RCC_APB2Periph_GPIOB, ENABLE);

    GPIO_InitTypeDef GPIO_InitStructure;

    /* GPIOA Configuration: Channel 1, 2, 3 and 4 as alternate function push-pull */
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8 | GPIO_Pin_9 | GPIO_Pin_10 | GPIO_Pin_11;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;

    GPIO_Init(GPIOA, &GPIO_InitStructure);

    /* GPIOB Configuration: Channel 1N, 2N and 3N as alternate function push-pull */
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_13 | GPIO_Pin_14 | GPIO_Pin_15;
    GPIO_Init(GPIOB, &GPIO_InitStructure);

    /* Time base configuration */
    TIM_TimeBaseStructure.TIM_Prescaler = prescaler;
    TIM_TimeBaseStructure.TIM_CounterMode = TIM_CounterMode_Up;
    TIM_TimeBaseStructure.TIM_Period = period;
    TIM_TimeBaseStructure.TIM_ClockDivision = clock_division;
    TIM_TimeBaseStructure.TIM_RepetitionCounter = 0;
    TIM_TimeBaseInit(TIM1, &TIM_TimeBaseStructure);

    /* Channel 1, 2,3 and 4 Configuration in PWM mode */
    TIM_OCInitStructure.TIM_OCMode = TIM_OCMode_PWM2;
    TIM_OCInitStructure.TIM_OutputState = TIM_OutputState_Enable;
    TIM_OCInitStructure.TIM_OutputNState = TIM_OutputNState_Enable;
    TIM_OCInitStructure.TIM_Pulse = 0;
    TIM_OCInitStructure.TIM_OCPolarity = TIM_OCPolarity_Low;
    TIM_OCInitStructure.TIM_OCNPolarity = TIM_OCNPolarity_High;
    TIM_OCInitStructure.TIM_OCIdleState = TIM_OCIdleState_Set;
    TIM_OCInitStructure.TIM_OCNIdleState = TIM_OCIdleState_Reset;

    TIM_OC1Init(TIM1, &TIM_OCInitStructure);

    TIM_OCInitStructure.TIM_Pulse = 0;
    TIM_OC2Init(TIM1, &TIM_OCInitStructure);

    TIM_OCInitStructure.TIM_Pulse = 0;
    TIM_OC3Init(TIM1, &TIM_OCInitStructure);

    TIM_OCInitStructure.TIM_Pulse = 0;
    TIM_OC4Init(TIM1, &TIM_OCInitStructure);

    /* TIM1 counter enable */
    TIM_Cmd(TIM1, ENABLE);

    /* TIM1 Main Output Enable */
    TIM_CtrlPWMOutputs(TIM1, ENABLE);
}

void pwm_set_duty_cycle_ch1(unsigned int duty) {
    /* PWM1 Mode configuration: Channel1 */
    TIM_OCInitStructure.TIM_Pulse = duty;
    TIM_OC1Init(TIM1, &TIM_OCInitStructure);
}

void pwm_set_duty_cycle_ch2(unsigned int duty) {
    /* PWM1 Mode configuration: Channel2 */
    TIM_OCInitStructure.TIM_Pulse = duty;
    TIM_OC2Init(TIM1, &TIM_OCInitStructure);
}

void pwm_set_duty_cycle_ch3(unsigned int duty) {
    /* PWM1 Mode configuration: Channel3 */
    TIM_OCInitStructure.TIM_Pulse = duty;
    TIM_OC3Init(TIM1, &TIM_OCInitStructure);
}

void pwm_set_duty_cycle_ch4(unsigned int duty) {
    /* PWM1 Mode configuration: Channel4 */
    TIM_OCInitStructure.TIM_Pulse = duty;
    TIM_OC4Init(TIM1, &TIM_OCInitStructure);
}

