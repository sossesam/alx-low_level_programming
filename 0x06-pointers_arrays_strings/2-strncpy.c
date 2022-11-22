#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
    int length;
    int b;


    length = 0;

    
    while(*(dest + length) != '\0')
    {
        length++;
     
    }

    b = 0;
    while(*(dest + b) != '\0')
    {
        while(b < n)
        {
            *(dest + b) = *(src + b);
            b++;
        }
        
        b++;
    }
 






    return (dest);
}
