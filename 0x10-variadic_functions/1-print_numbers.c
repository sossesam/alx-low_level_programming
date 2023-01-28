#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...){
    unsigned int i;

    if(separator == NULL){
         NULL;
    }else{
    va_list param;

    va_start(param, n);
    for(i =  0; i < n; i++){

        printf("%d", va_arg(param, int));
        if(i < n - 1){
             printf("%c ", *separator);
        }
       
    }
    printf("\n");
    va_end(param);
    }
}
