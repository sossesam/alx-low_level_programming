#include <stdlib.h>
#include <stdio.h>
#include "lists.h"


/**
 * print_listint - function to print all elements of list
 * @h: pointer to the elements of lists
 * Return: count of the nodes
 */

size_t print_listint(const listint_t *h)
{
size_t count;

count = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
count++;

}
return (count);
}
