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

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
    if (n < 0)
    {
        printf("%d is negative\n", n);

    }
    else if (n > 0)
    {
        printf("%d is postive", n);
    }
    else
    {
        printf("%d is zero\n", n);
    }


	return (0);
}
