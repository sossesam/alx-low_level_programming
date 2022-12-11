#include "main.h"


void puts2(char *str)
{
    int string_length(char *);
    int length;
    int c;

    length = string_length(str);
    for(c = 0; c < length;c = c + 2)
    {
        _putchar(*(str + c));
    }

    _putchar('\n');

}

int string_length(char *pointer)
{
    int c = 0;
    while(*(pointer + c) != '\0')
    {
        c++;
    }
    return (c);
}
