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
				return NULL;
			}
            else
			{
                if(array == NULL){
                    return NULL;
                }
				while (i < size)
				{
					array[i] = c;
					i++;
				}
			}
return (array);
}

    

