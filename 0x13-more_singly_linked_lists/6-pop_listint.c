#include "lists.h"


/**
 * pop_listint - function to remove the head node of a list
 * @head: pointer to the pointer of the list
 * Return: the value stored in the head node or 0
 */

int pop_listint(listint_t **head){
listint_t *pop;
int num;

if(*head != NULL)
{

pop = (*head);

num = (*pop).n;

*head = (*head)->next;
free(pop);
return (num);
}
return (0);
}
