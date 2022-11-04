#include "main.h"

int print_last_digit(int c)
{
    long a;
    a = c;
    if(a < 0)
    {
        a = a * (-1);
    }
    if(a > 10)
    {
        a = a % 10;
    }
    _putchar(a + '0');
    return (a);
}
