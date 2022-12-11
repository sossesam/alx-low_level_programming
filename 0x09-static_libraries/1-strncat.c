#include "main.h"

char *_strncat(char *dest, char *src, int n)
{

    int a;
    int b;

    b = 0;
    while(*(dest + b) != '\0')
    {
        b++;
    }

    for(a = 0; a < n && *(src + a) != '\0'; a++)
    {
        *(dest + b) = *(src + a);
        b++;
    }

    return(dest);
}
