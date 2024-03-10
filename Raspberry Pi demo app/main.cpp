#include <wiringPi.h>

// LED Pin - wiringPi pin 0 is BCM_GPIO 17.
// we have to use BCM numbering when initializing with wiringPiSetupSys
// when choosing a different pin number, use the BCM numbering, 
// also update the Property Pages - Build Events - Remote Post-Build Event command which uses gpio export for setup for wiringPiSetupSys
#define	LED	17

int main(void)
{
	wiringPiSetupSys();

	pinMode(LED, OUTPUT);

	while (true) //basically an infinite loop while the device is on
	{
		digitalWrite(LED, HIGH);  // On
		delay(500); // delay in ms
		digitalWrite(LED, LOW);	  // Off
		delay(500);
	}
	return 0;
}