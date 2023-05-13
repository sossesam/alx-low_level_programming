#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings- prints the strings
 * @n : number of strings
 * @separator: seperator
 *
 * Returns- void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list parag;
unsigned int i;
char *str;

va_start(parag, n);
for (i = 0; i < n; i++)
{
str = (va_arg(parag, char *));
if (str == NULL)
{
str = "nill";
}
printf("%s", str);

if (i < n - 1)
{
printf("%s", separator);
}

}
printf("\n");
va_end(parag);

}
