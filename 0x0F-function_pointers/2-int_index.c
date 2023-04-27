#include <stdio.h>
#include "function_pointers.h"


/**
 * int_index - check if a number is equal to 98
 * @array: the integer to check
 * @size:size of array
 * @cmp: function pointer
 * Return: -1 if false, something else otherwise.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i, c;
i = 0;
if (array != NULL)
{
if (cmp != NULL)
{
if (size <= 0)
{
return (-1);
}
else
{
while ((*cmp)(array[i]) == 0)
{
if (i >= size)
{
return (-1);
}
i++;
c = i;

}
}

return (c);
}
}
return (-1);
}
