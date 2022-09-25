/*
 * timer.h
 *
 * Created: 9/12/2022 4:24:20 PM
 *  Author: agh
 */ 


#ifndef TIMER_H_
#define TIMER_H_
#include "../GPIO/gpio.h"
#define OVERFLOWNUM 20
#define Blinking 3

/*
set_timer function
start timer
get timer state
reset timer
*/

void timerDelay (void);
void timerDelayBlink(void);
void timerStart(void);
void timerInitialization (void);
void timerStop(void);
#endif /* TIMER_H_ */