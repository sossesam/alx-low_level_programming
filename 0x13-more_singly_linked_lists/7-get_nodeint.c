#include "lists.h"
/**
 * get_nodeint_at_index - get the node at an index
 * @head: the start of node
 * @index: position of node
 * Return: returns node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count;
count = 0;
if (head == NULL)
{
return (NULL);
}
while (head->next != NULL && count < index)
{
head = head->next;
count++;
}
return (head);
}
