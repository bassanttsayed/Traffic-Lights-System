/*
 * button.c
 *
 * Created: 9/12/2022 4:21:10 PM
 *  Author: agh
 */ 
#include "button.h"

void buttonInitilization (uint8_t portNum, uint8_t pinNum){
	GPIO_init(portNum,pinNum,IN);
}
void buttonRead (uint8_t portNum, uint8_t pinNum, uint8_t * value){
	GPIO_Read(portNum,pinNum, value);
}