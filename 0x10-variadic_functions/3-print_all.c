#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

void printint(va_list list){
    printf("%d", va_arg(list, int));
}

void printchar(va_list list){
    printf("%c", va_arg(list, int));
}

void printfloat(va_list list){
    printf("%f", va_arg(list, double));
}

void printstring(va_list list){
    printf("%s", va_arg(list, char *));
}


void print_all(const char * const format, ...)
{
    va_list list;
    identifier frmt[]={
        {"i", printint},
        {"c", printchar},
        {"f", printfloat},
        {"s", printstring}
    };

    int i, j;
    
    va_start(list, format);
    i = 0;
    while(format[i] != '\0'){

        j=0;
        while (j < 4)
        {
            if(format[i] == *frmt[j].st){
                frmt[j].func(list);
                printf(", ");
            }
            j++;
        }
        

        i++;
    }
    
    va_end(list);
}
