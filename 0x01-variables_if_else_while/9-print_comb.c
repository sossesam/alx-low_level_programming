#include <stdio.h>

int main(void)
{
    char number;

    for(number = '0'; number <= '9'; number++)
    {
       
            putchar(number);
            if(number != '9')
            {
                putchar(',');
                putchar(' ');
            }

    }
     putchar('\n');

     return (0);
}
