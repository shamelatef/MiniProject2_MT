/*
 * main.c
 *
 *  Created on: Sep 11, 2023
 *      Author: Shamel Radwan
 */




#include <util/delay.h>
#include  "Timer1/Timer1.h"
#include  "Seven_Segment/_7_Seg.h"
#include "interrupts/interrupts.h"


int main(void)
{

Timer1_INIT();
GPIO_INIT();



while(1)
{

	disable_all();
	Write_ON_7SEG(s1,"S1");
	_delay_ms(5);

	disable_all();
	Write_ON_7SEG(s2,"S2");
	_delay_ms(5);

	disable_all();
	Write_ON_7SEG(m1,"M1");
	_delay_ms(5);

	disable_all();
	Write_ON_7SEG(m2,"M2");
	_delay_ms(5);


	disable_all();
	Write_ON_7SEG(h1,"H1");
	_delay_ms(5);


	disable_all();
	Write_ON_7SEG(h2,"H2");
	_delay_ms(5);



};


}
