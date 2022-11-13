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
   

    for(x = slen; x >= 1; x--)
    {
        s--;
      _putchar(*s);
     
      
    }
    _putchar('\n');
} 
