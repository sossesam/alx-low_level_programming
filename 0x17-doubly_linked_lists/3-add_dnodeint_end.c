#include "lists.h"

/**
 * add_dnodeint_end- adds a new node to the end of a list
 * @head: start of a list
 * @n: data
 * Return: return the list
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

dlistint_t *temp;
dlistint_t *new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
free(new_node);
return (NULL);
}

new_node->n = n;
new_node->next = NULL;
temp = *head;
if (temp != NULL)
{
while (temp->next != NULL)
{
temp = temp->next;
}

temp->next = new_node;
new_node->prev = temp;
}
else
{
*head = new_node;
new_node->prev = NULL;
}

return (*head);
}
