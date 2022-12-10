#include "main.h"
#include <stdio.h>

void print_diagsums(int *a, int size)
{
    int i;
    int forward_sum;
    int backward_sum;
    backward_sum = 0;
    forward_sum = 0;
    for(i = 0; i < size; i++)
    {
        forward_sum += a[(i * size) + i];
        backward_sum = backward_sum + a[(size * i) + ((size - i) - 1)];
    }
    printf("%d, %d \n", forward_sum, backward_sum);
}
