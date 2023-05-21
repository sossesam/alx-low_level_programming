#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *add_node - function to print list
 * @head: pointer to the beginning of the list
 * @str: pointer to a str
 * Return: The count of elements
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new_struc;
unsigned int i;
i = 0;

new_struc = malloc(sizeof(list_t));
if (new_struc == NULL)
{
return (NULL);
}
while (str[i] != '\0')
{
i++;
}
new_struc->str = strdup(str);
if (str == NULL)
{
free(new_struc);
return (NULL);
}
new_struc->len = i;
new_struc->next = *head;
*head = new_struc;
return (new_struc);
}
