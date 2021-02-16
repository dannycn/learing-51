#include "main.h"

void main()
{
	int i = 0;
    
    while(1)
    {
        P1 = 0XFE;
        
        for(i = 0; i < 8; i++)
        {
            delay(100);
            
            P1 <<= 1;
            P1 |= 1;
            
            FM = ON;
            
            delay(100);
            
            FM = OFF;
        }
    }
}