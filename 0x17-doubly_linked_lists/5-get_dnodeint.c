#include "lists.h"


/**
 * get_dnodeint_at_index- get the node at an index
 * @head:start of a list
 * @index: index to get the node
 * Return: returns the node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int count;
count = 0;
while (head != NULL && count <= index)
{
if (count == index)
{
return (head);
}
head = head->next;
count++;
}
return (head);
}
