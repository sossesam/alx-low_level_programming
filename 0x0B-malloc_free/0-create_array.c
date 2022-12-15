#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
    char *array;
    unsigned int i;

    i = 0;

        array = malloc(sizeof(char) * size);
        if (size == 0)
			{
				array[size] = '\0';
			}
            else
			{
				while (i < size)
				{
					array[i] = c;
					i++;
				}
                array[size] = '\0';
			}
return (array);
    }

    

