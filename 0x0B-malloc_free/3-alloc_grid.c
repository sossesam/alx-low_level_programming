#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
    int **first_step;
    int i, j;

    if(width <= 0|| height <= 0)
    {
        return NULL;
    }

    first_step = malloc(sizeof(int *) * width);
    if(first_step == NULL)
    {
        return NULL;
    }

    for(i = 0; i < height; i++)
    {
        first_step[i] = malloc((sizeof(int) * width) + 1);
        if (first_step[i] == NULL)
		{
			for (i = i - 1; i >= 0 ; i--)
			{
				free(first_step[i]);
			}
			free(first_step);
			return (NULL);
		}
        for(j = 0; j < width; j++)
        {
            first_step[i][j] = 0;
        }
    }
    return first_step;
}
