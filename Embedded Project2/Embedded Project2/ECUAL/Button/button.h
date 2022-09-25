/*
 * button.h
 *
 * Created: 9/12/2022 4:20:57 PM
 *  Author: agh
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_
#include "../../MCAL/GPIO/gpio.h"

void buttonInitilization (uint8_t portNum, uint8_t pinNum);
void buttonRead (uint8_t portNum, uint8_t pinNum, uint8_t * value);





#endif /* BUTTON_H_ */