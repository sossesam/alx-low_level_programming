#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
    int **array;
    int i, j;

    array = malloc(sizeof(int) * width);

    if(array == NULL){
        return NULL;
    }
    else{
        if(width  == 0 || height == 0){
            return NULL;
        }else{for(i = 0; i < width; i++){
        for(j =  0; j < height; j++){
            array[i] = malloc(sizeof(int) * height);
            array[i][j] = 0;
        }

    }}}
    return array;
}
