#include "main.h"
#include <stdio.h>

void print_diagsums(int *a, int size)
{
    int i;
    int j;
    int forward_sum;
    int backward_sum;
    backward_sum = 0;
    forward_sum = 0;
    for(i = 0; i < size; i++)
    {

        for(j = 0; j < size; j++)
        {
            
            if(i == j)
            {
                forward_sum += a[(i * size) + j];
            }
        }
    }
    for(i = size; i > 0; i--)
    {

        for(j = size; j > 0; j--)
        {
            
            if(i == j)
            {
                backward_sum = backward_sum + a[(size * i) - j];
            }
        }
    }
    
    printf("%d , %d\n", forward_sum, backward_sum);
}
