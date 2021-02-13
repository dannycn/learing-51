#include <reg52.h>

#ifndef __MAIN_H_
#define __MAIN_H_

#define ON 0
#define OFF 1

sbit LED1 = P1^0;
sbit LED2 = P1^1;
sbit LED3 = P1^2;
sbit LED4 = P1^3;
sbit LED5 = P1^4;
sbit LED6 = P1^5;
sbit LED7 = P1^6;
sbit LED8 = P1^7;

void delay(unsigned int xms);

void func1();
void func2();
void func3();

#endif