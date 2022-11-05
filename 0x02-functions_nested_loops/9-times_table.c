#include "main.h"


void times_table(void)
{
    int number, numberz, result;



    for(number = 0; number < 10; number++)
    {
        for(numberz = 0; numberz < 10; numberz++)
        {
            result= number * numberz;

            if(numberz > 0){
                _putchar(' ');
               
            }
            if(result < 10)
            {
                 _putchar(' ');
                 _putchar('0' + result);
            }
            if(result >= 10)
            {
                 _putchar('0'+ (result / 10));
                 _putchar('0' + (result % 10));
            }
             

             if(numberz < 9)
             {
                 _putchar(',');
             }
            

            
        }
        _putchar('\n');
    }
}
