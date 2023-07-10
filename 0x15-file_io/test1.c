#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
/**
 * main - PID
 *
 * Return: Always 0.
 */
#include <stdio.h>

/**
 * main - function to print all arguments being passed
 * @argc: argument numbers
 * @argv: arguments passed
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int a;

	for (a = 0; argv[a] != NULL; a++)
	{
		printf("%s ", argv[a]);
	}
	return (0);
}

