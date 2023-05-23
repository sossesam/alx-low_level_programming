#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint- add a node to the beginning
 * @head: start of the node
 * @n:  number added
 * Returns: return the address to the head
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if(new == NULL)
    return (NULL);

new->n = n;
new->next = *head;
*head = new;

return (*head);
}
