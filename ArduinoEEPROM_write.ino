#include <EEPROM.h>

#define EEPROM_ADDRESS_MAX 1024

void setup()
{
	Serial.begin(19200);
	
	writeToEeprom();
}

void loop()
{
}

void writeToEeprom()
{
	for (int i = 0; i < EEPROM_ADDRESS_MAX; i++)
	{		
		Serial.print("write ");
		Serial.print(i);
		Serial.print(" to eeprom address ");
		Serial.println(i);
	
		EEPROM.write(i, i);	
		
		delay(500);
	}	
}