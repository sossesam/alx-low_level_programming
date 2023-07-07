#include "main.h"
/**
 * get_bit- get the nth byte
 * @n: number
 * @index: position of byte
 * Return: return 1 if successful
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int i;
int a;
i = 0;
if ((sizeof(unsigned long int) * 8) < index)
return (-1);

while (i < index)
{
n = n >> 1;
i++;
}

a = n & 1;
if (i <= index)
return (a);

return (a);
}

/**
 * set_bit- sets the nnth byte
 * @n: number
 * @index: position of byte
 * Return: return 1 if successful
*/

int set_bit(unsigned long int *n, unsigned int index)
{unsigned long int check, temp;


if ((sizeof(unsigned long int) * 8) < index)
return (-1);


temp = 1;
check = get_bit(*n, index);
if (!check)
{
temp = temp << index;
}
*n = *n + temp;
return (1);
}
