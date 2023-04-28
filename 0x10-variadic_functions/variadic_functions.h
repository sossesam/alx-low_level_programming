#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H
#include <stdarg.h>

/**
 * struct select - defines representing a data type
 * @st: the data type
 * @func: function that prints data type in correct fmt
 */

typedef struct select
{
char *st;
void (*func)(va_list list);
} identifier;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);



#endif
