#include <stdio.h>
#include "function_pointers.h"
/**
* array_iterator - iterates over an array while perfoming the action
* @array: the integer to print
* @size: size of array
* @action: function to use
* Return: Nothing.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array != NULL || action != NULL)
{
unsigned long int i;
for (i = 0; i < size; i++)
action(array[i]);
}
}
