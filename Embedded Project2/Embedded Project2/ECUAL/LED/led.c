/*
 * led.c
 *
 * Created: 9/12/2022 4:20:27 PM
 *  Author: agh
 */ 
#include "led.h"

void ledInitilization (uint8_t portNum, uint8_t pinNum){
	
	GPIO_init(portNum,pinNum,OUT);
}
void ledOn (uint8_t portNum, uint8_t pinNum){
	GPIO_Write(portNum,pinNum,HIGH);
}
void ledOff (uint8_t portNum, uint8_t pinNum){
	GPIO_Write(portNum,pinNum,LOW);
}
void ledToggle (uint8_t portNum, uint8_t pinNum){
	GPIO_Toggle(portNum,pinNum);
}
uint8_t isLedOn (uint8_t portNum, uint8_t pinNum){
	uint8_t result;
	GPIO_Read(portNum,pinNum,&result);
	return result;
}