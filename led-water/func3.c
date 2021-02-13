#include <intrins.h>
#include "main.h"

void func3()
{
    P1 = 0XFE;
    
    while(1)
    {
        delay(200);
        
        P1 = _crol_(P1, 1);
    }
}