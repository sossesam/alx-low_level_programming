#include "main.h"

/**
 * main - main fuction;
 *
 * @n: number;
 *
 * Return: return 0;
 */

int print_last_digit(int n)
{
	int a;

	a = n  % 10;

	_putchar(a + '0');
	return (0);
}
