#include "lists.h"

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
