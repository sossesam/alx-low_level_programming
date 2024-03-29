#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_list - function to print list
 * @h: pointer to the beginning of the list
 * Return: The count of elements
 */
size_t print_list(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
count++;
}

return (count);
}
