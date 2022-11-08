#include "main.h"

void more_numbers(void)
{
    int units,count;

    for(count = 0; count < 10; count++)
    {
        for(units = 0; units < 15; units++)
        {
            if(units >= 10)
            {
                _putchar((units / 10) + '0');
            }
                _putchar((units % 10)+ '0');
            
            
        }
        _putchar('\n');
    }


}
