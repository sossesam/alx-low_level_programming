#include "main.h"


void puts_half(char *str)
{
   int string_length(char *);
   int length; 
   int start;
   int c;


   length = string_length(str);

   if (length % 2 == 0){
    start = length / 2;
   }else{
    start = (length - 1)/2;
   }

   for(c = 0; c < length; c++){
    if(c >= start){
        _putchar(*(str + c));
    }
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
