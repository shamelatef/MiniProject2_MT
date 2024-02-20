/*
 * interrupts.h
 *
 *  Created on: Sep 12, 2023
 *      Author: Shamel Radwan

 */

#ifndef INTERRUPTS_INTERRUPTS_H_
#define INTERRUPTS_INTERRUPTS_H_
extern unsigned char s1,s2,m1,m2,h1,h2;
#include <avr/interrupt.h>
ISR(TIMER1_COMPA_vect);
ISR(INT0_vect);
ISR(INT1_vect);
ISR(INT2_vect);



#endif /* INTERRUPTS_INTERRUPTS_H_ */
