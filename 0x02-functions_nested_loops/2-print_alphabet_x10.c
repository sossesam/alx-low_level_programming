#include "main.h"

/**
 * print_alphabet_x10
 *
 * Return-returns 0
 */


void print_alphabet_x10(void)
{
	int c;

	c = 0;

	while (c < 10)
	{
		char d = 'a';
		while (d <= 'z')
		{
			_putchar(d);
			d++;
		}
		_putchar('\n');

		c++;
	}

}
