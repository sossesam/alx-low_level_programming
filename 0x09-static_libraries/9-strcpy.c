#include "main.h"

char *_strcpy(char *dest, char *src)
{
    int length;
    int i;
    length = 0;
    while(*(src + length) != '\0')
    {
        length++;
    }
    for(i = 0; i <= length; i++)
    {
        dest[i] = src[i];
        if(i == length)
        {
            *(dest + i) = '\0';
        }

    }


    return(dest);
}
