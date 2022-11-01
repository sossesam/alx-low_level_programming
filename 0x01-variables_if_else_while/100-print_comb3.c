#include <stdio.h>

int main()
{
    int tens;
    int unit;

    for(tens = 0; tens < 9; tens++){

        for(unit = tens; unit < 9; unit++){
            putchar(tens + '0');
            putchar(unit + '1');
            putchar(',');
            putchar(' ');
        }
    }
    putchar('\n');
    return (0);

}
