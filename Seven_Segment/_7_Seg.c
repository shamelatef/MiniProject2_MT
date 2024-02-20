/*
 * _7_Seg.c
 *
 *  Created on: Sep 11, 2023
 *      Author: Shamel Radwan

 */


#include "_7_Seg.h"


void Write_ON_7SEG(unsigned char num,char *c)
{
	// writing on the first 4 bits in portc
	PORTC = (PORTC & 0xF0) | (num & 0x0F);


	if (strcmp(c,"S1")==0)
	{

		SET_BIT(PORTA,0);

	}
	else if (strcmp(c,"S2")==0)
	{

		SET_BIT(PORTA,1);

	}
	else if (strcmp(c,"M1")==0)
	{
		SET_BIT(PORTA,2);

	}
	else if (strcmp(c,"M2")==0)
	{
		SET_BIT(PORTA,3);

	}
	else if (strcmp(c,"H1")==0)
	{
		SET_BIT(PORTA,4);

	}
	else if (strcmp(c,"H2")==0)
	{
		SET_BIT(PORTA,5);

	}


}


void disable_all()
{
				CLEAR_BIT(PORTA,0);
				CLEAR_BIT(PORTA,5);
				CLEAR_BIT(PORTA,2);
				CLEAR_BIT(PORTA,3);
				CLEAR_BIT(PORTA,4);
				CLEAR_BIT(PORTA,1);


}
