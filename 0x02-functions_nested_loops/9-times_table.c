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


	while (vertical < 10)
	{
		horizontal = 0;
		while (horizontal < 10)
		{
			int result;

			result = vertical * horizontal;

			if (result < 10)
			{

			_putchar(result + '0');
			}else if (result >= 10)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}

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
