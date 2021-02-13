#include <reg52.h>

#define ON 0
#define OFF 1

sbit led1 = P1 ^ 5;

void main()
{
    // 1. 点亮全部
    P1 = ON;
    
    // 1. 点亮第一个
    // P1 = 0xFE;
    
    // 2. 点亮第四个
    // led1  = ON;
}
