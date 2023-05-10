#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers- pprints numbers from cli with seperator
 * @n: number of argument
 * @separator: a seperator
 * Return: returns a number
 *
*/


void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;

if (separator == NULL)
{
separator="";
}
else
{
va_list param;

va_start(param, n);
for (i =  0; i < n; i++)
{

printf("%d", va_arg(param, int));
if (i < n - 1 && separator != 0)

printf("%c ", *separator);


}
printf("\n");
va_end(param);
}
}
