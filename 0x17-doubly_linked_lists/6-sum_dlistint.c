#include "lists.h"



int sum_dlistint(dlistint_t *head)
{
int sum;
sum = 0;
if (head == NULL)
return sum;

while(head != NULL)
{
sum = head->n + sum;
head = head->next;
}
return sum;
}
