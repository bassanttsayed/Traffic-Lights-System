/*
 * app.h
 *
 * Created: 9/12/2022 4:24:52 PM
 *  Author: agh
 */ 


#ifndef APP_H_
#define APP_H_
#include "../ECUAL/Button/button.h"
#include "../ECUAL/LED/led.h"
#include "../MCAL/Interrupt/interrupt.h"
#include "../MCAL/Timers/timer.h"

void appInitilization(void);
void appStart(void);
void pedistrianMode(void);
void BlinkLED();




#endif /* APP_H_ */