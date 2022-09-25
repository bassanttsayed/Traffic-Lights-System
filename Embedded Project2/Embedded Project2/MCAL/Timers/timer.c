/*
 * timer.c
 *
 * Created: 9/12/2022 4:24:08 PM
 *  Author: agh
 */ 
#include "timer.h"
#include <avr/interrupt.h>



void timerDelay (void){
	uint8_t counter=0;
	while(counter < OVERFLOWNUM){
		while ( (TIFR & (1<<0)) == 0);
		TIFR |= 1<<0;
		counter ++;
	}
	counter =0;
}

void timerStop(void){
	TCCR0 = 0x00;
}

void timerStart(void){
    TCCR0  |= 1<<CS00 | 1<<CS02 ;
}

void timerInitialization (void){
	TCCR0 &= (~ ( (1<<WGM00) | (1<<WGM01) ));
	TCNT0 = 0x00;
}
void timerDelayBlink(){
	uint8_t counter=0;
	while(counter < Blinking){
		while ( (TIFR & (1<<0)) == 0);
		TIFR |= 1<<0;
		counter ++;
	}
	counter =0;
}
