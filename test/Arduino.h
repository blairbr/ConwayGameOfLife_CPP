#ifndef _ARDUINO_H_
#define _ARDUINO_H_

#include <stdint.h>

extern int numCallsToRandSeed;
extern int numCallsToAnalogRead;
extern uint8_t pinNumPassedToAnalogRead;
extern unsigned long numPassedToRandSeed;
void randomSeed(unsigned long);
int analogRead(uint8_t pin);
void mockInit();

#endif