/*
 * Registers.h
 *
 * Created: 9/12/2022 4:34:51 PM
 *  Author: agh
 */ 


#ifndef REGISTERS_H_
#define REGISTERS_H_
typedef unsigned char uint8_t;
/*******************
PORTS
********************/
#define PORTA *((volatile uint8_t)0x3B)
#define DDRA *((volatile uint8_t)0x3B)




#endif /* REGISTERS_H_ */