#include "main.h"

int print_last_digit(int c)
{
    if(c < 0)
    {
        c = c * (-1);
    }
    if(c > 10)
    {
        c = c % 10;
    }
    _putchar(c + '0');
    return (c);
}
