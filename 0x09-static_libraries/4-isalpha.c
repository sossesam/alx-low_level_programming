#include "main.h"

/**
 * _isalpha - funnction that returns alphabet
 *
 * @c: return 0 or 1
 *
 * Return: returns 0 or 1
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}