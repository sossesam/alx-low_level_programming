#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>


/**
 * op_add - function
 * @a: number of arguments
 * @b: argument variables passed
 * Return: result
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - function
 * @a: number of arguments
 * @b: argument variables passed
 * Return: result
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - function
 * @a: number of arguments
 * @b: argument variables passed
 * Return: result
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - function
 * @a: number of arguments
 * @b: argument variables passed
 * Return: result
 */
int op_div(int a, int b)
{
if (a == 0 || b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - function
 * @a: number of arguments
 * @b: argument variables passed
 * Return: result
 */

int op_mod(int a, int b)
{
if (a == 0 || b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
