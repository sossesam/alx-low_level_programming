#include <stdio.h>
#include <math.h>
/**
 * main - prime numbers o
 *
 * Return: Always 0.
 */
int main(void)
{

unsigned int long n = 1231952, a = (int) sqrt(n);

while (1)
{

	if (n % a == 0)
	{
		printf("%lu \n", n / a);
		break;
	}
	a--;

}

return (0);
}