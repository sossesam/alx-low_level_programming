#include "main.h"
/**
 * print_alphabet - fuctionn that prints alphabet from a to z
 *
 * Return- its a void so no return parameter
 */


void print_alphabet(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');


}
