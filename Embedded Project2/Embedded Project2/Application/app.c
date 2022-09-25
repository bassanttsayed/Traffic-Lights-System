
/*
 * app.c
 *
 * Created: 9/12/2022 4:25:01 PM
 *  Author: agh
 */ 
#include "app.h"
uint8_t buttonClick =0;
uint8_t blinkCheck =0;
void appInitilization(void)
{
	/******Setting Pedestrian LEDS*******/
	ledInitilization(PortB,0);
	ledInitilization(PortB,1);
	ledInitilization(PortB,2);
	
	
	
	 ledInitilization(PortD,7);
	 ledInitilization(PortC,0);
	 ledInitilization(PortC,2);
	 
	/*****Setting Cars LEDS********/
	
	ledInitilization(PortA,0);
	ledInitilization(PortA,1);
	ledInitilization(PortA,2);
	
	/*****Setting the Push Button for Pedestrian*****/
	buttonInitilization(PortD,2);
	
	/****Setting the timer*****/
	timerInitialization();
	timerStart();
 
		
	/****Setting the interrupt*****/
	INT0_init();
	
}
void appStart(void){
	//if(buttonClick==0)
	//{
	ledOff(PortC,2);
	ledOff(PortD,7);
	ledOn(PortC,0);
	ledOn(PortA,0);
	ledOn(PortB,2);
	timerDelay();
	ledOff(PortA,0);
	ledOff(PortB,2);
	//ledOn(PortA,1);
	BlinkLED();
	//ledOn(PortB,1);
	ledOff(PortA,1);
	ledOff(PortB,1);
	blinkCheck=0;
	ledOn(PortA,2);
	ledOn(PortB,0);
	timerDelay();
	ledOff(PortA,2);
	ledOff(PortB,0);
	BlinkLED();
	ledOff(PortA,1);
	ledOff(PortB,1);
	blinkCheck=0;
	
	//}
	//else if(buttonClick==1)
	//{
		
		
		
	//}
}
void pedistrianMode(){
	//isLedOn(PortA,2)==1
	if(isLedOn(PortA,2)==1)
	{
		//ledOn()
		ledOn(PortD,7);
		ledOn(PortA,2);
		ledOn(PortB,0);
		timerDelay();
		//	ledOff(PortA,2);
		//	ledOff(PortB,0);
		buttonClick=0;
	}
	else if((isLedOn(PortA,0)==1) || (blinkCheck==1))
	{
		ledOn(PortC,2);
		ledOff(PortC,0);
		//ledOff(PortD,7);
		ledOff(PortA,0);
		ledOn(PortB,2);
		//ledOn(PortA,1);
		//ledOn(PortB,1);
		BlinkLED();
		//timerDelay();
		ledOff(PortA,1);
		ledOff(PortB,1);
		blinkCheck=0;
		ledOff(PortB,2);
		ledOn(PortA,2);
		ledOn(PortB,0);
		timerDelay();
		ledOff(PortA,2);
		ledOff(PortB,0);
		buttonClick=0;
	}
	ledOff(PortA,2);
	//ledOn(PortA,1);
	//ledOn(PortB,1);
	ledOn(PortB,0);
	BlinkLED();
	// xxxx ledOn(PortB,0);
	//timerDelay();
	ledOff(PortB,0);
	ledOff(PortA,1);
	ledOff(PortB,1);
	blinkCheck=0;
	ledOn(PortB,2);
	ledOn(PortA,0);
	
	//appStart();
	
}
void BlinkLED(){
	blinkCheck=1;
	for (int i=0; i<5; i++){
		ledToggle(PortB,1);
		ledToggle(PortA,1);
		timerDelayBlink();
	}
	
}
ISR(INT0_vect){
	pedistrianMode();
	//buttonClick=1;
	
}
