/*
 * gpio.c
 *
 * Created: 9/12/2022 4:23:53 PM
 *  Author: agh
 */ 
#include"gpio.h"

//global variables
void GPIO_init(uint8_t portNum, uint8_t pinNum, uint8_t dir){
	switch(portNum){
		case PortA:
		if(dir == IN){
			DDRA &= (~(1<<pinNum)); 
		}
		else if (dir == OUT){
			DDRA |= (1<<pinNum);
		}
		else {
			printf("Error direction");
		}
		break;
		
		case PortB:
		if(dir == IN){
			DDRB &= (~(1<<pinNum));
		}
		else if (dir == OUT){
			DDRB |= (1<<pinNum);
		}
		else {
			printf("Error direction");
		}
		break;
		
		case PortC:
		if(dir == IN){
			DDRC &= (~(1<<pinNum));
		}
		else if (dir == OUT){
			DDRC |= (1<<pinNum);
		}
		else {
			printf("Error direction");
		}
		break;
		
		case PortD:
		if(dir == IN){
			DDRD &= (~(1<<pinNum));
		}
		else if (dir == OUT){
			DDRD |= (1<<pinNum);
		}
		else {
			printf("Error direction");
		}
		break; 
	}
}
void GPIO_Write(uint8_t portNum, uint8_t pinNum, uint8_t value){
	switch(portNum){
		case PortA:
		if(value == LOW){
			PORTA &= (~(1<<pinNum));
		}
		else if (value == HIGH){
			PORTA |= (1<<pinNum);
		}
		else {
			printf("Error value");
		}
		break;
		
		case PortB:
		if(value == LOW){
			PORTB &= (~(1<<pinNum));
		}
		else if (value == HIGH){
			PORTB |= (1<<pinNum);
		}
		else {
			printf("Error value");
		}
		break;
		
		case PortC:
		if(value == LOW){
			PORTC &= (~(1<<pinNum));
		}
		else if (value == HIGH){
			PORTC |= (1<<pinNum);
		}
		else {
			printf("Error value");
		}
		break;
		
		case PortD:
		if(value == LOW){
			PORTD &= (~(1<<pinNum));
		}
		else if (value == HIGH){
			PORTD |= (1<<pinNum);
		}
		else {
			printf("Error value");
		}
		break;
	}
	
}

void GPIO_Toggle(uint8_t portNum, uint8_t pinNum){
	switch (portNum){
		case PortA:
		PORTA ^= 1<< pinNum;
		break;
		
		case PortB:
		PORTB ^= 1<< pinNum;
		break;
		
		case PortC:
		PORTC ^= 1<< pinNum;
		break;
		
		case PortD:
		PORTD ^= 1<< pinNum;
		break;
	}
}
void GPIO_Read (uint8_t portNum, uint8_t pinNum, uint8_t * value){
	switch(portNum){
		case PortA:
		*value = (( PINA &(1<< pinNum) ) >> pinNum);
		break;
		
		case PortB:
		*value = (( PINB &(1<< pinNum) ) >> pinNum);
		break;
		
		case PortC:
		*value = (( PINC &(1<< pinNum) ) >> pinNum);
		break;
		
		case PortD:
		*value = (( PIND &(1<< pinNum) ) >> pinNum);
		break;
	}
}
