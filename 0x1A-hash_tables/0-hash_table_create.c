#include "hash_tables.h"
#include <stdlib.h>

/*
* *hash_table_create - creates a hash table;
* @size: size of the table;
*
*Return: returns the address to the table;
*/

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *table;

table = NULL;

if (size == 0)
{
return (NULL);
}

table = malloc(sizeof(hash_table_t));

if (table == NULL)
{
return (NULL);
}

table->size = size;

table->array = malloc(sizeof(hash_node_t *) * size);

if (table->array == NULL)
{
return (NULL);
}

return (table);
}
