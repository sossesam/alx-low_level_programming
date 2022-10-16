#include <stdio.h>
#include <stdlib.h>


/**
 * _atoi - converts a string to an integer
 * main- multiplies two numbers
 * @argc: string to be converted
 * @argv: pointer to string
 * Return: the int converted from the string
 */

int main(int argc, char *argv[])
{
	int x, y, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	result = x * y;
	printf("%d\n", result);
	return (0);
}
