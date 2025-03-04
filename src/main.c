#include <18F4550.h>

// Configuration bits
#fuses NOWDT, HSPLL, PLL5, CPUDIV1, USBDIV, VREGEN, NOLVP
#use delay(clock=48MHz)  // Assuming a 48MHz clock

// Define pins
#define PROXIMITY_SENSOR PIN_B0 // Proximity sensor input pin (RB0)
#define MOTOR_DIR1 PIN_D0       // Motor direction control pin 1 (RD0)
#define MOTOR_DIR2 PIN_D1       // Motor direction control pin 2 (RD1)
#define DEBUG_LED PIN_C0        // Debug LED pin (RC0)

void main() {
    // Set pin directions
    set_tris_b(0x01); // Set RB0 as input (Proximity Sensor), others as outputs
    set_tris_d(0x00); // Set PORTD as output (Motor Direction)
    set_tris_c(0x00); // Set PORTC as output (Debug LED)

    // Initialize motor direction pins and debug LED to low
    output_low(MOTOR_DIR1);
    output_low(MOTOR_DIR2);
    output_low(DEBUG_LED);

    while (1) {
        // Simple debouncing routine
        if (input(PROXIMITY_SENSOR)) {
            delay_ms(20); // Small delay to debounce
            if (input(PROXIMITY_SENSOR)) {
                // Object detected, rotate motor in one direction
                output_high(MOTOR_DIR1);
                output_low(MOTOR_DIR2);
                output_high(DEBUG_LED); // Turn on LED to indicate object detected
            }
        } else {
            delay_ms(20); // Small delay to debounce
            if (!input(PROXIMITY_SENSOR)) {
                // No object detected, rotate motor in the opposite direction
                output_low(MOTOR_DIR1);
                output_high(MOTOR_DIR2);
                output_low(DEBUG_LED); // Turn off LED to indicate no object detected
            }
        }
    }
}

