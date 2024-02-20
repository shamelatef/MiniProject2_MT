/*
 * _7_Seg.h
 *
 *  Created on: Sep 11, 2023
 *      Author: Shamel Radwan

 */

#ifndef SEVEN_SEGMENT__7_SEG_H_
#define SEVEN_SEGMENT__7_SEG_H_
#include "../GPIO/init.h"
#include <string.h>

void Write_ON_7SEG(unsigned char num,char *c);

void disable_all();

#endif /* SEVEN_SEGMENT__7_SEG_H_ */
