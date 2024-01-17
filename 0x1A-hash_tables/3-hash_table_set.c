#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{   
    hash_node_t *node;
    unsigned long int hash_key;

    hash_key = hash_djb2((unsigned char *)key) % ht->size;
    node = NULL;
    node = malloc(sizeof(hash_node_t));
    if (node == NULL){
        return 0;
    }
    node->key = strdup(key);
    node->value = strdup(value);
    node->next = NULL;

    if(ht->array[hash_key] ==NULL){
        ht->array[hash_key] = node;
    }
    else{
        node->next = ht->array[hash_key];
    }
    
    ht->array[hash_key] = node;

    return 0;
}

char *strdup(const char *c)
{
    char *dup = malloc(strlen(c) + 1);

    if (dup != NULL)
       strcpy(dup, c);

    return dup;
}