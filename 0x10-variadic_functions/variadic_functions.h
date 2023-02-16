#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

typedef struct what_format
{
	char *type;
	void (*f)();
} what_format;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
