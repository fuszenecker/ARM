#include "lpc2103.h"
#include "library.h"

// HASN'T BEEN TESTED!!!
void inline set_pwm_00(int value, int period) {
    PINSEL0 &= ~(3 << 6);           // Enables MAT0.0 pin
    PINSEL0 |= (2 << 6);            // Enables MAT0.0 pin

    T0TC = T0IR = T0CTCR = 0;       // Timer clock source: PCLK (System clock)
    T0PR = 0;                       // Prescaler register's maximum: no prescaler

    T0MR0 = (period - value);       // Set output values
    T0MR3 = period;                 // Set period
    T0MCR = (1 <<  10);             // Reset the counter if MR3 matches TC
    T0EMR = (2 << 4) | (1 << 10);   // Sets output when TC matches M0 and clears output when TC matches M3
    T0PWMCON = 1;                   // Enables PWM on MAT0.0 output pin

    T0TCR = 2;                      // Reset counter
    T0TCR = 1;                      // Enable counter
}

void inline set_pwm_20(int value, int period) {
    PINSEL0 &= ~(3 << 14);          // Enables MAT2.0 pin
    PINSEL0 |= (2 << 14);           // Enables MAT2.0 pin

    T2TC = T2IR = T2CTCR = 0;       // Timer clock source: PCLK (System clock)
    T2PR = 0;                       // Prescaler register's maximum: no prescaler

    T2MR0 = (period - value);       // Set output values
    T2MR3 = period;                 // Set period
    T2MCR = (1 <<  10);             // Reset the counter if MR3 matches TC
    T2EMR = (2 << 4) | (1 << 10);   // Sets output when TC matches M0 and clears output when TC matches M3
    T2PWMCON = 1;                   // Enables PWM on MAT2.0 output pin

    T2TCR = 2;                      // Reset counter
    T2TCR = 1;                      // Enable counter
}
