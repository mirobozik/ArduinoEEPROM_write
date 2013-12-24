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
	byte val = 0;
	for (int i = 0; i < EEPROM_ADDRESS_MAX; i++)
	{		
		Serial.print("write ");
		Serial.print(val);
		Serial.print(" to eeprom address ");
		Serial.println(i);
	
		EEPROM.write(i, val);	
		val++;
		if (val==256)
		{
			val = 0;
		}
		delay(500);
	}	
}