#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
    int **first_step;
    int i, j;
    first_step = malloc(sizeof(int *) * width);

    for(i = 0; i < width; i++)
    {
        first_step[i] = malloc(sizeof(int) * height);
        for(j = 0; j < height; j++)
        {
            first_step[i][j] = 0;
        }
    }

    return first_step;
}
