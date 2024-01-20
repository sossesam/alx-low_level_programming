#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
    unsigned long int i, n;
    n = 0;

    if(ht == NULL)
    {
       return; 
    }

    for(i = 0; i < ht->size; i++){
        if(i == 0){
            printf("{");
        }
        if(ht->array[i] != NULL)
        {



            while(ht->array[i] != NULL){
                
                printf("\'%s\':\'%s\'", ht->array[i]->key, ht->array[i]->value);
                if(ht->array[i]->next){
                    printf(", ");
                }
                ht->array[i] = ht->array[i]->next;
                    
            }

            while(ht->array[n] == NULL){
                n++;
            }
            if(ht->array[n] != NULL && n < ht->size){
                    printf(", ");
                }

        }
        if(i == ht->size - 1){
            printf("}");
        }
    }
    printf("\n");
}