#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number
 * @size: size of
 * Return: NULL if failed.
 */

void *_calloc(unsigned int nmemb, unsigned int size){

void *array;
char *zero;
unsigned int a;

if(nmemb <= 0 || size <= 0)
return NULL;

zero = malloc(nmemb * size);

array = zero;
if(zero == 0){
    return NULL;
}

for(a = 0; a <(nmemb * size); a++){
    zero[a] = 0;
}
return array;
}
