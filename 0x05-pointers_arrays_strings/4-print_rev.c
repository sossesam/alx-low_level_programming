#include "main.h"



void print_rev(char *s)
{
    int slen;
    int x;
    slen = 0;
    while(*s != '\0')
    {
        slen++;
        s++;

    }
   

    for(x = slen; x >= 0; x--)
    {
      _putchar(*s);
      s--;
    }
    _putchar('\n');
} 
