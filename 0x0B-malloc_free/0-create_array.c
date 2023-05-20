#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c){
	//first we declare the new array
	char *array;
	unsigned int i;
	//then we allocate the memory with malloc to the size  provided as parameter
	

	//now to insert the char c into the array

	//if the size is not equal to zero 
	if(size > 0){
		array = malloc(size * (sizeof(char)));
		for(i = 0; i < size; i++){
		array[i] = c;
	}
	return array;
	free(array);
	}else{
		return NULL;
	}
	
	
}
