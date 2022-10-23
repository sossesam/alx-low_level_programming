#include "main.h"
/**
 * print_alphabet - fuctionn that prints alphabet from a to z
 *
 * Return- its a void so no return parameter
 */


void print_alphabet(void)
{
	char alphabet;

	alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');


}
