#include "main.h"
#include <stdlib.h>
#include <stdio.h>

void *malloc_checked(unsigned int b)
{
    void *store;

    store = malloc(b);
    if (store == 0){
        exit(98);
    }
    return store;
}
