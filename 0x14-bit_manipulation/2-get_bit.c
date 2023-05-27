#include "main.h"

int get_bit(unsigned long int n, unsigned int index)
{unsigned int i;
int a;
i = 0;

while(i < index)
{
    n = n >> 1;
    i++;
}
a = n & 1;
if(n >= 0 && i <= index){
    return (a);
}else{
    return (-1);
}
}
