#include "main.h"

/**
 * times_table - prints times table
 *
 * Return: void
 */

void times_table(void)
{
	int vertical;
	int horizontal;

	
	vertical = 0;
	horizontal = 0;


	while (vertical < 10)
	{
		while (horizontal < 10)
		{
			int result;

			result = vertical * horizontal;

			_putchar('0' + result)

			if (horizontal < 10)
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
