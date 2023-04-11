#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * array_range - a function that creates an array of integers.
 * @min: minimum values
 * @max: maximum values
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max){
int *darray;
int a;

if (min > max)
return (NULL);

darray = malloc(sizeof(int) * (max - min + 1));
if(darray == 0)
return (NULL);

for(a = 0; min <= max; min++, a++){
darray[a] = min;
}

return darray;

}
