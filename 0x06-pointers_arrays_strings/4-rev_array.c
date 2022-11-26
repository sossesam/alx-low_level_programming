#include "main.h"

void reverse_array(int *a, int n)
{
    int temp;
    int i;

    i = 0;

    while( i < n/2)
    {
        temp = *(a + (n - 1));
       *(a + (n - 1)) = *(a + i);
        *(a + i) = temp;
        i++;
        n--;
    }
}
