#include "main.h"

int print_last_digit(int c)
{
    if(c < 0)
    {
        c = c * (-1);
    }
    if(c == 0)
    {
        return(0);
    }
    else if(c > 0 && c < 10){
        return c;
    }else if(c > 10)
    {
        c = c % 10;
    }
return print_last_digit(c);
}
