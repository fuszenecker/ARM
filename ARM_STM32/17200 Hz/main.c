// ---------------------------------------------------------------------------
// This file contains the "main()" function of the microcontroller.
// ---------------------------------------------------------------------------

#include <config.h>
#include <sysinit.h>

#include <irq.h>
#include <gpio.h>
#include <clock.h>
#include <pwm.h>

extern const unsigned int f_cpu;            // Frequency of CPU clock

volatile unsigned int pwm_duty_cycle;       // Frequency of CPU clock

volatile unsigned int output_value;         // Current voltage 
                                            // of the supercapacitor
volatile unsigned int output_ref_value;     // Max. voltage of the
                                            // of the supercapacitor

volatile unsigned int current_value;        // Current value of the current
volatile unsigned int current_ref_value;    // Max. value of the current

#define N   500000

// ---------------------------------------------------------------------------
// The "main()" function is started by the "sysinit()" routine.
// The "sysinit()" is the function that is started when the MCU starts.
// ---------------------------------------------------------------------------

int main() {
    // Until I realize nirvana...
    while (1) {
    }
}

