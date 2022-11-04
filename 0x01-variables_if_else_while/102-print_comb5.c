#include <stdio.h>

int main(void)
{
    int ten1, unit1, ten2, unit2, number, number2;
    for(number = 0; number < 99; number++)
    {
        ten1 =number / 10;
        unit1 = number % 10;
        
        number2 = 1;
       while(number2 < 100)
        {
            
            ten2 =number2 / 10;
            unit2 = number2 % 10;

            if(ten1 < 1)
            {
                ten1 = 0;
            }
            if(ten2 < 1){
                ten2 = 0;
            }
            putchar(ten1 + '0');
            putchar(unit1 + '0');
            putchar(' ');
            putchar(ten2 + '0');
            putchar(unit2 + '0');
            putchar(',');
            number2++;

        }
        
    }
   
    return (0);
}
