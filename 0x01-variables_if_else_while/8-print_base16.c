#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main()
{
	int c;
	c = 0;

	while (c <= 16)
	{
		printf("%x",c);
		c++;
	}
	printf("\n");
	return(0);
}
