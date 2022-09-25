/*
 * gpio.h
 *
 * Created: 9/12/2022 4:23:44 PM
 *  Author: agh
 */ 

#include<avr/io.h>
#ifndef GPIO_H_
#define GPIO_H_

typedef unsigned char unit8_t;

#define PortA 'A'
#define PortB 'B'
#define PortC 'C'
#define PortD 'D'
#define LOW 0
#define HIGH 1
#define IN 0
#define OUT 1

void GPIO_init(uint8_t portNum, uint8_t pinNum, uint8_t dir);
void GPIO_Write(uint8_t portNum, uint8_t pinNum, uint8_t value);
void GPIO_Read (uint8_t portNum, uint8_t pinNum, uint8_t * value);
void GPIO_Toggle(uint8_t portNum, uint8_t pinNum); 

#endif /* GPIO_H_ */