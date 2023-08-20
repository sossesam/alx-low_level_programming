#include "lists.h"

/**
 * dlistint_len- returns the number of nodes in alist
 * @h: the head of the node
 * Return: return the number of node
*/
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *head;
size_t number_of_nodes;
head = h;
number_of_nodes = 0;

while (head != NULL)
{
number_of_nodes++;
head = head->next;
}

return (number_of_nodes);
}
