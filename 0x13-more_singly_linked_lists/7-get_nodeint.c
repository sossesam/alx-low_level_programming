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
listint_t *current;
count = 0;
current = NULL;

while (head != NULL)
{
if (count == index)
{
current = head;
return (current);
}
head = head->next;
count++;
}
return (current);
}
