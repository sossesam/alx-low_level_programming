#include "main.h"
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
    char *array;
    int len_s1, len_s2, t_len, i, j, k, l;
    len_s1 = 0;
    len_s2 = 0;
    t_len = len_s1 + len_s2;

    for (i = 0; s1[i] != '\0'; i++)
    {
        len_s1 = i;
    }
     for (j = 0; s2[j] != '\0'; j++)
    {
        len_s2 = j;
    }

    array = malloc(sizeof(char) * (t_len));


    for ( l = 0; l < len_s1 + 1; l++)
    {
        array[l] =  s1[l];
    }
    for ( k = 0; k < len_s2 + 1; k++)
    {
        array[k + l] =  s2[k];
    }
    array[k + l] = '\0';
return array;
}
