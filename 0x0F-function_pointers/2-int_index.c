#include <stdio.h>
#include "function_pointers.h"


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
