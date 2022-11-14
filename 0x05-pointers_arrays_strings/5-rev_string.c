#include "main.h"
#include <stdio.h>

void rev_string(char *s)
{
    char temp;
    char* begin;
    char* end;
    int length, c;
    int string_length(char*);

    begin = s;
    end = s;
    length = string_length(s);
   

        for(c = 0; c < length - 1; c++)
        {
            end++;
        }

        for (c = 0; c < length/2; c++)
            {        
                temp   = *end;
                *end   = *begin;
                *begin = temp;

                begin++;
                end--;
            }
        
     }

     int string_length(char *pointer)
        {
        int c = 0;
        
        while( *(pointer + c) != '\0' )
            c++;
        
        return c;
        }

