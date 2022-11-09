#include "main.h"


void print_diagonal(int n)
{
    int x,y;
    x = 0;
    
    while(x < n && n > 0)
    {
        y = 0;
        while(y < x)
        {
            _putchar(' ');
            y++;

        }
        _putchar(92);
        _putchar('\n');
    
        x++;

    }
}
