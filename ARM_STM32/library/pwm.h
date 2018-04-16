#ifndef __PWM_H__
#define __PWM_H__

#include <stm32f10x_rcc.h>
#include <stm32f10x_tim.h>
#include <stm32f10x_gpio.h>

void pwm_init(unsigned int clock_division, unsigned int prescaler, unsigned int period);
void pwm_set_duty_cycle_ch1(unsigned int duty);
void pwm_set_duty_cycle_ch2(unsigned int duty);
void pwm_set_duty_cycle_ch3(unsigned int duty);
void pwm_set_duty_cycle_ch4(unsigned int duty);

#endif
