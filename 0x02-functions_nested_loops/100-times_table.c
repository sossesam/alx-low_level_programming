#include "main.h"

/**
 * times_table - prints times table
 * @n: parameter
 * Return: void
 */

void print_times_table(int n)
{
	int vertical;
	int horizontal;

	vertical = 0;

	while (vertical <= n)
	{

		if (n < 0 || n > 15)
		{
			break;
		}
		horizontal = 0;
		while (horizontal <= n)
		{
			int result;

			result = vertical * horizontal;

			if (result == 0 && horizontal == 0)
			{
				_putchar(result + '0');
			}
			else if (result < 10 && horizontal > 0)
			{
				_putchar(' ');
				_putchar('0' + result);
			}
			else if (result >= 10 )
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			if (horizontal < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			horizontal++;
		}
		_putchar('\n');
		vertical++;
	}
}
