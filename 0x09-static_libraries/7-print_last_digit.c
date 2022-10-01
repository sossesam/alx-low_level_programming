#include "main.h"

/**
 * print_last_digit - main fuction;
 *
 * @n: number;
 *
 * Return: return 0;
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
	{
		a = (n  % 10) * -1;
		_putchar(48 + a);
		return (a);
	}

	a = n  % 10;

	_putchar(48 + a);
	return (a);
}
