#include "lists.h"

/**
 * add_nodeint_end - adds node to the end of the page
 * @head: start of the node
 * @n: new number added
 * Return: returns the new node.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *current;

new = malloc(sizeof(listint_t));
if (new == NULL)
{
    return (NULL);
}
new->n = n;
new->next = NULL;


if (*head == NULL)
    *head = new;
else if((*head)->next == NULL)
    (*head)->next = new;


else
{
current = *head;
while (current->next != NULL)
current = current->next;
current->next = new;
}


return(new);
}
