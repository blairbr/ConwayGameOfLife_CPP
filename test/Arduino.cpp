#include "Arduino.h"

int numCallsToRandSeed;
int numCallsToAnalogRead;
unsigned long numPassedToRandSeed;

void mockInit() {
    numCallsToRandSeed = 0;
    numCallsToAnalogRead = 0;
    numPassedToRandSeed = 0;
}

void randomSeed(unsigned long number) {
    numCallsToRandSeed++;
    numPassedToRandSeed = number;
}

int analogRead(uint8_t pin) {
    numCallsToAnalogRead++;
    return 0;
}