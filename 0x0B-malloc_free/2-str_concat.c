#include "main.h"
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
   char *s3;
   int len_s1;
   int len_s2;
   int len_s3;
   

   if(s1 == NULL)
    {
        s1 = malloc(sizeof(char) * 1);
        *s1 = '\0';
    }
    if(s2 == NULL)
    {
        s2 = malloc((sizeof(char) * 1) + 1);
        *s2 = '\0';
    }

    len_s1 = _strlen(s1);
    len_s2 = _strlen(s2);
    len_s3 = len_s1 + len_s2;


    s3 = malloc(sizeof(char) * len_s3);

    s3 = _strcat(s3, s1);
     s3 = _strcat(s3, s2);

    return s3;
}

int _strlen(char *s)
{
    int count;
    count = 0;
    while(*s != '\0')
    {
        count = count + 1;
        s = s + 1;
    }
    return count;
}

char *_strcat(char *dest, char *src)
{
    int b;
    int a;

    a = 0;
    b = 0;

    while(dest[a] != '\0')
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
