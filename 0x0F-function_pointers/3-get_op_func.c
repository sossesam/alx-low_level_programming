#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - function
 * @s:nxxnxn
 * Return: result
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;
i = 0;
while (i < 5)
{
if (*(ops[i].op) == *s)
return (ops[i].f);

i++;
}
i = 0;
return (0);
}
