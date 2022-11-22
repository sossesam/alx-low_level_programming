#include "main.h"

int length(char *ptr);
int _strcmp(char *s1, char *s2)
{
    int first;
    int second;
    int result;

    first = length(s1);
    second = length(s2);

    if ( first < second)
    {
        result = -15;

    }else if( first > second)
    {
        result = 15;
    }else{
        result = 0;
    }

    return (result);
}

int length(char *ptr)
{
    int x;

    x = 0;

    while(*(ptr + x) != '\0'){
        x++;
    }
    return (x);
}
