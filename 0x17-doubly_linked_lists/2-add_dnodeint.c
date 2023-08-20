#include "lists.h"


/*start program
create a new node
if creation fails
    free new_node
    return NULL

set new_node.n as n
set new_node.prev as NULL;
set new_node.next as head
set the head.prev as new_node


set head as new_node;
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node = malloc(sizeof(dlistint_t));

if( new_node == NULL)
{
    free(new_node);
    return NULL;
}

new_node->n = n;
new_node->prev = NULL;
new_node->next = *head;


if(*head != NULL)
{
(*head)->prev  = new_node;
}


*head = new_node;




return *head;
}
