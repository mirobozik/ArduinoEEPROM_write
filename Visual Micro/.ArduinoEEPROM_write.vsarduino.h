//Board = Arduino Leonardo
#define __AVR_ATmega32U4__
#define ARDUINO 105
#define F_CPU 16000000L
#define __AVR__
extern "C" void __cxa_pure_virtual() {;}

//
//
void writeToEeprom();

#include "D:\applications\arduino-1.0.5\hardware\arduino\variants\leonardo\pins_arduino.h" 
#include "D:\applications\arduino-1.0.5\hardware\arduino\cores\arduino\arduino.h"
#include "D:\projects-arduino\ArduinoEEPROM_write\ArduinoEEPROM_write.ino"
