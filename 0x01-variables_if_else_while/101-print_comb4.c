#include <stdio.h>

int main(void)
{
    int hundred, tens, unit, sum;
    for(hundred = 0; hundred < 8; hundred++)
    {
        tens = hundred + 1;
        while(tens < 9)
        {
            unit = tens + 1;
            while(unit <= 9)
            {
                sum = hundred + tens + unit;
                putchar(hundred + '0');
                putchar(tens + '0');
                putchar(unit + '0');
                if(sum < 24)
                {
                    putchar(',');
                    putchar(' ');
                }
                
                unit++;
            }
                tens++;
        }
    }
        putchar('\n');
}
