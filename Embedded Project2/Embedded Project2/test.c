/*
 * test.c
 *
 * Created: 9/14/2022 8:19:14 PM
 *  Author: agh
 */ 
#include "test.h"
#include "util/delay.h"
void testGPIO(void){
	//testing Port c pin6 and pin 7 as output where pin 6 is low and pin 7 is high
	GPIO_init(PortC,7,1);
	GPIO_init(PortC,6,1);
	GPIO_Write(PortC,7,1);
	GPIO_Write(PortC,6,0);
}
void testLED(void){
	ledInitilization(PortC,2);  //testing port C pin 2
	while (1)
	{
		ledOn(PortC,2);
		_delay_ms(1000);
		ledOff(PortC,2);
		_delay_ms(1000);		
	}
}
void testTimer(void){
	timerInitialization();
	timerStart();
	ledInitilization(PortC,2);	
	while (1)
	{
		ledOn(PortC,2);
		timerDelay();
		ledOff(PortC,2);
		timerDelay();	
	}
}