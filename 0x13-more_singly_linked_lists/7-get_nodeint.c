#include "lists.h"


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count;
count = 0;
while (head->next != NULL && count < index)
{
head = head->next;
count++;
}
return (head);
}
