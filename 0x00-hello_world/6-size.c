#include <stdio.h>

/** main- Write a C program that prints the size of various types on the computer 
 * 
 * 
 * Return: Always returns (0)
 */

int main()
{
printf("Size of a char: %d byte(s)\n", sizeof(char));
printf("Size of an int: %d byte(s)\n", sizeof(int));
printf("Size of a long: %ld byte(s)\n", sizeof(long int));
printf("Size of a long long: %lld byte(s)\n", sizeof(long long));
printf("Size of a float: %ld byte(s)\n", sizeof(float));
return (0);
}
