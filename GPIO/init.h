/*
 * init.h
 *
 *  Created on: Sep 11, 2023
 *      Author: Shamel Radwan
 */

#ifndef GPIO_INIT_H_
#define GPIO_INIT_H_


#include <avr/io.h>
#include <avr/interrupt.h>



void GPIO_INIT(void);
#define SET_BIT(PORT,PIN_NUMBER) (PORT|=(1<<PIN_NUMBER))
#define CLEAR_BIT(PORT,PIN_NUMBER) (PORT&= ~(1<<PIN_NUMBER))
#define READ_BIT(PORT,PIN_NUMBER) ((PORT) &   (1<<(PIN_NUMBER)))
#define TOGGLE_BIT(PORT,PIN_NUMBER) ((PORT) ^=  (1<<(PIN_NUMBER)))

#endif /* GPIO_INIT_H_ */
