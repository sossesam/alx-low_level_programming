#include "main.h"

int get_bit(unsigned long int n, unsigned int index)
{
unsigned int i;
int a;
i = 0;
if((sizeof(unsigned long int) * 8) < index)
return (-1);

while(i < index)
{
n = n >> 1;
i++;
}

a = n & 1;
if(i <= index)
return (a);

return (a);
}
