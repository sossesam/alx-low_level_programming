#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>


int sum_them_all(const unsigned int n, ...){
unsigned int i;
unsigned int sum;

va_list args;
sum = 0;

if(n == 0){
    return 0;
}else{
    va_start(args, n);
for(i = 0; i < n; i++){
    sum = sum + va_arg(args, int);
}
va_end(args);
}
return sum;
}
