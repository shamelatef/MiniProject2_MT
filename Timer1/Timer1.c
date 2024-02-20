/*
 * Timer1.c
 *
 *  Created on: Sep 11, 2023
 *      Author: Shamel Radwan

 */



#include "Timer1.h"


void Timer1_INIT(void)
{

    TCCR1A = (1 << FOC1A); // Clear OC1A on Compare Match (optional)
    TCCR1B = (1 << WGM12) | (1 << CS10)|(1<<CS12); // CTC mode & prescale(1024)
    TIMSK |= (1 << OCIE1A); // Enable Timer1 compare match A interrupt
    SREG |= (1 << 7); // Enable global interrupts
    TCNT1 = 0;
    OCR1A = 978; // Compare match at 978 (1 second)
}

