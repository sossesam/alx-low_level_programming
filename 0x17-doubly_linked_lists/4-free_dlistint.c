#include "lists.h"

/**
 * free_dlistint- free's a list
 * @head: start of the list
 * Return: returns void
*/


void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;
while (head != NULL)
{
temp = head->next;
free(head);
head = temp;
}
}
