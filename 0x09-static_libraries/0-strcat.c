#include "main.h"

char *_strcat(char *dest, char *src)
{
    int b;
    int a;

    a = 0;
    b = 0;

    while(*(dest + a) != '\0')
    {
        a++;
    }

    while(*(src + b) != '\0')
    {
        *(dest + a) = *(src + b);
        b++;
        a++;
    }


   
    return (dest);
   
}
