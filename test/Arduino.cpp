#include "Arduino.h"

int numCallsToRandSeed;
int numCallsToAnalogRead;
uint8_t pinNumPassedToAnalogRead;
unsigned long numPassedToRandSeed;

void mockInit() {
    numCallsToRandSeed = 0;
    numCallsToAnalogRead = 0;
    pinNumPassedToAnalogRead = UINT8_MAX;
    numPassedToRandSeed = __LONG_MAX__;
}

void randomSeed(unsigned long number) {
    numCallsToRandSeed++;
    numPassedToRandSeed = number;
}

int analogRead(uint8_t pin) {
    pinNumPassedToAnalogRead = pin;
    numCallsToAnalogRead++;
    return ANALOG_READ_RESULT;
}