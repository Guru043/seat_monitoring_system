#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Threshold values
#define VIBRATION_THRESHOLD 300
#define TEMP_THRESHOLD_HIGH 30.0
#define TEMP_THRESHOLD_LOW 25.0

// Function to simulate analog sensor readings
int simulateAnalogRead(int minVal, int maxVal) {
    return rand() % (maxVal - minVal + 1) + minVal;
}

// Function to display simulated LCD output
void displayLCD(int vibrationValue, float temperature) {
    printf("===== LCD Display =====\n");
    printf("Vib: %d\n", vibrationValue);
    printf("Temp: %.2f C\n", temperature);
    printf("=======================\n");
}

int main() {
    // Seed the random number generator
    srand(time(0));

    while (1) {
        // Simulate sensor readings
        int vibrationValue = simulateAnalogRead(200, 400); // Vibration: range [200, 400]
        float temperature = simulateAnalogRead(20, 35);    // Temperature: range [20, 35]

        // Display values on the simulated LCD
        displayLCD(vibrationValue, temperature);

        // Check vibration alert
        if (vibrationValue > VIBRATION_THRESHOLD) {
            printf("ALERT: High Vibration! Activating motor and LED.\n");
        } else {
            printf("Vibration Normal.\n");
        }

        // Control fan based on temperature
        if (temperature > TEMP_THRESHOLD_HIGH) {
            printf("Fan: ON (High Temperature)\n");
        } else if (temperature < TEMP_THRESHOLD_LOW) {
            printf("Fan: OFF (Low Temperature)\n");
        } else {
            printf("Fan: IDLE (Temperature Normal)\n");
        }

        // Simulate a delay (500 ms)
        printf("\n");
        #ifdef _WIN32
            Sleep(500); // Windows-specific
        #else
            usleep(500000); // Unix-based
        #endif
    }

    return 0;
}
