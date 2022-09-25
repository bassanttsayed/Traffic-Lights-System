/*
 * led.h
 *
 * Created: 9/12/2022 4:20:45 PM
 *  Author: agh
 */ 


#ifndef LED_H_
#define LED_H_
#include "../../MCAL/GPIO/gpio.h"

void ledInitilization (uint8_t portNum, uint8_t pinNum);
void ledOn (uint8_t portNum, uint8_t pinNum);
void ledOff (uint8_t portNum, uint8_t pinNum);
void ledToggle (uint8_t portNum, uint8_t pinNum);
uint8_t isLedOn (uint8_t portNum, uint8_t pinNum);



#endif /* LED_H_ */