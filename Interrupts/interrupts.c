/*
 * interrupts.c
 *
 *  Created on: Sep 12, 2023
 *      Author: Shamel Radwan

 */
#include "interrupts.h"
unsigned char s1=0,s2=0,m1=0,m2=0,h1=0,h2=0;


ISR(TIMER1_COMPA_vect)
{
	s1++;
	if (s1==10)
	{
		s1=0;
		s2++;
		if (s2==6)
		{
			s2=0;
			m1++;
			if(m1==10)
			{
				m1=0;
				m2++;
				if (m2== 6)
				{
					m2=0;

					h1++;

					if(h1==10)
					{
						h1=0;
						h2++;
					}
			}
			}
		}
	}
	// if it is 24:00:00 - reset to 00:00:00

	if(h1==4&& h2==2)
	{
		s1=0;
		s2=0;
		m1=0;
		m2=0;
		h1=0;
		h2=0;
	}



}
// Reset
ISR(INT0_vect)
{
	s1=0;
	s2=0;
	m1=0;
	m2=0;
	h1=0;
	h2=0;
	TCNT1=0;
}

// Pause
ISR(INT1_vect)
{
	TCCR1B=0;
}

// Resume
ISR(INT2_vect)
{
    TCCR1B = (1 << WGM12) | (1 << CS10)|(1<<CS12); // CTC mode &  prescale(1024)

}
