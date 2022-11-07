#include "main.h"

void print_to_98(int n)
{
    if(n <= 98)
    {
        while(n <= 98)
        {
            if(n <= 9)
            {
                _putchar('0' + n);
                _putchar(',');
            }
            
            if(n >= 9)
            {
               
                _putchar('0' + (n / 10));
                _putchar('0' + (n % 10));
                _putchar(',');
            }
            n++;
        }
    }else if(n >= 98)
    {
        while(n >= 98)
        {
             if(n > 98 && n < 100)
            {
                _putchar(' ');
                _putchar('0' + (n / 10));
                _putchar('0' + (n % 10));
                _putchar(',');
            }else if(n > 98 && n >= 100)
            {
                _putchar(' ');
                _putchar('0' + (n / 100));
                _putchar('0' + ((n - 100 )/ 10));
                _putchar('0' + (n % 10));
                _putchar(',');
            }else if(n == 98)
            {  _putchar('9');
               _putchar('8');
               _putchar('\n');}
            n--;
        }
    }
}
