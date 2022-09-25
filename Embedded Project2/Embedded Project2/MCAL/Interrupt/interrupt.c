/*
 * timer.c
 *
 * Created: 9/12/2022 4:23:01 PM
 *  Author: agh
 */

#include "interrupt.h"

void INT0_init(){
	 sei();
	 MCUCR |= (1<<ISC00) | (1<<ISC01);
	 GICR |= (1<<INT0);
}