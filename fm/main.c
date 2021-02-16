#include <reg52.h>

#define ON 0
#define OFF 1

sbit FM = P2^3;

void delay(unsigned int xms)
{
    unsigned int i, j;

    for(i = xms; i > 0; i--)
    {
        for(j = 112; j > 0; j--)
        {
            ;
        }
    }
}

void main()
{
    FM = ON;
    P1 = 0XFF;
    
    delay(1000);
    
    FM = OFF;
    P1 = 0XFE;
    
    delay(1000);
}
