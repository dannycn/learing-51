#include "main.h"

void func2()
{
    int i;
    
    while(1)
    {
        P1 = 0XFE;

        for(i = 0; i < 8; i++)
        {
            delay(200);

            P1 <<= 1;

            P1 |= 0X01;
        }
    }
}