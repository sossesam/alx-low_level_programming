#include "hash_tables.h"


char *hash_table_get(const hash_table_t *ht, const char *key){
    const hash_node_t *table;
    unsigned long int index_number;
   

    index_number= key_index((const unsigned char *)key, ht->size);
    table = ht->array[index_number];

    if(table == NULL || key == NULL)
    {
        return NULL;
    }

    while(table != NULL)
    {
        if(strcmp(table->key, key) == 0)
        {
            return table->value;
        }
        table = table->next;
    }


    return NULL;
}