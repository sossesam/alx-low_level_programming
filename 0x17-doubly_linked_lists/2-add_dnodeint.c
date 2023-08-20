#include "lists.h"


/**
 * add_dnodeint- Add a node to the beginning of a list;
 * @head: pointer to the list
 * @n: data of the node
 * Return: returns the head ofthe list
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node = malloc(sizeof(dlistint_t));

if (new_node == NULL)
{
free(new_node);
return (NULL);
}

new_node->n = n;
new_node->prev = NULL;
new_node->next = *head;

if (*head != NULL)
{
(*head)->prev  = new_node;
}
*head = new_node;
return (*head);
}
