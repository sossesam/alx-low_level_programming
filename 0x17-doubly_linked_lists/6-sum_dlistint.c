#include "lists.h"
/**
 * sum_dlistint- adds the values of node in a list
 *  @head: start of the list
 * Return: returns the sum of the nodes
*/


int sum_dlistint(dlistint_t *head)
{
int sum;
sum = 0;
if (head == NULL)
return (sum);

while (head != NULL)
{
sum = head->n + sum;
head = head->next;
}
return (sum);
}
