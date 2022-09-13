#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - checks if number equals 0 is greter tha or less to 6
 * Return: returns 0
 */ 
int main(void)
{
	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int l = n % 10;

	if (n > 5){
		printf("Last digit of %d is %d and is greater than 5", n, l)
	}
	else if (n = 0){
		printf("Last digit of %d is %d  and is 0",n,l)
	}
	else (n < 6){
		printf("Last digit of %d is %d and is less than 6 and not 0",n,l)
	
	return (0);
	
}
