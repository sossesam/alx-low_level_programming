#include "main.h"

/**
 * _islower - function to detect lower case
 *
 * Return: returns 0
 *
 * c: the parameter c is the ascii number 
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);

}
