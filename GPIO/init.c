/*
 * init.c
 *
 *  Created on: Sep 11, 2023
 *      Author: Shamel Radwan
 */

#include "../GPIO/init.h"


void GPIO_INIT(void)
{
	// first 4 pins are output in Port C
	// used as input to the 7447
	DDRC |= 0x0F;


	// first 6 pins are output in Port A
	// used as input to the 7-SEG
	DDRA |= 0x3F;

/*************  INT0 init**********************************/

	CLEAR_BIT(DDRD,2);// PD2 as input
	SET_BIT(PORTD,2); // Internal Pull up

	SET_BIT(SREG,7); // Enable I-Bit

	// Falling Edge
	SET_BIT(MCUCR,ISC01);
	CLEAR_BIT(MCUCR,ISC00);

	SET_BIT(GICR,INT0);//External Interrupt Request 0 Enable
/************* END of INT0 init**********************************/





/******************      INT1 Init *****************************/

// INT1/PD3 -External Interrupt - Rising Edge - External Pull Down
	CLEAR_BIT(DDRD,3);// PD2 as input

	//Rising Edge
	MCUCR |= (1<<ISC11)|(1<<ISC10);


	SET_BIT(GICR,INT1);//External Interrupt Request 1 Enable

/************* END of INT1 init**********************************/






/******************      INT2 Init *****************************/

// INT2/PB2 -External Interrupt - Falling Edge - Internal Pull UP

	CLEAR_BIT(DDRB,2);// PD2 as input
	SET_BIT(PORTB,2);// internal pull up

	CLEAR_BIT(MCUCSR,ISC2);// Falling edge

	SET_BIT(GICR,INT2); //External Interrupt Request 2 Enable

/************* END of INT2 init**********************************/

}


