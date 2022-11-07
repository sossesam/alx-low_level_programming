#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - This program will assign a random number to the variable n
 *         and tells if n is positive or negative
 * 
 * Return: returns n
 **/

void positive_or_negative(int n)
{
	/* your code goes there */
    if (n < 0)
    {
    printf("%d is negative\n", n);
    }
    else if (n > 0)
    {
    printf("%d is positive\n", n);
    }
    else
    {
    printf("%d is zero\n", n);
    }

}
