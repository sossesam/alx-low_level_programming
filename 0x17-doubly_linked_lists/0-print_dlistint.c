#include "lists.h"

size_t print_dlistint(const dlistint_t *h){
size_t number_of_nodes;

const dlistint_t *head;

head = h;
number_of_nodes = 0;
while(head != NULL)
{
    printf("%d\n",head->n);
    head = head->next;
    number_of_nodes++;
}



return number_of_nodes;
}
