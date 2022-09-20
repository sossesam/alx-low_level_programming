#include "main.h"

/**
 * swap_int- funnction to swap variabbles
 *
 * Return: returns a funnction
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
