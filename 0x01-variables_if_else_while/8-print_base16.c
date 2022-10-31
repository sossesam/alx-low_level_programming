#include <stdio.h>

int main(void)
{
    char hex;

    for(hex = 48 ; hex <= 102; hex++)
    {
        if (hex <= 57 || hex >= 97)
        {
            putchar(hex);
        }
        
    }
    
     putchar('\n');

     return (0);
}
