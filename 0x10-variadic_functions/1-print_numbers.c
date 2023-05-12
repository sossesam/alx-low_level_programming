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
va_list args;
va_start(args, n);

if (separator == NULL)
{
separator = "";
}


for (i = 0; i < n; i++)
{
printf("%d%s", va_arg(args, int), separator);
}


printf("\n");

va_end(args);
}
