#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - replecates a function
 * @name: string
 * @f: pointer to the function
*/
void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
{
f(name);
}

}
