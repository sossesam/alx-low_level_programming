#include "lists.h"

/**
 * sum_listint- adds up all the sum of numbers
 * @head: the node
 * Return: return the sum of integers
*/

int sum_listint(listint_t *head)
{
int sum, num;
sum = 0;


while(head != NULL)
{
num = head->n;
sum = sum + num;
head = head->next;

}
return (sum);
}
