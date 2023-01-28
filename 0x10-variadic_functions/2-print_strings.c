#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list parag;
unsigned int i;
char *str;


va_start(parag, n);
for (i = 0; i < n; i++)
{

    str = (va_arg(parag, char *));
    if(str == NULL){
        printf("nill");
    }else{
        printf("%s", str);
    }
    if(i < n - 1){
        printf("%s", separator);
    }
    
}
printf("\n");
va_end(parag);

}
