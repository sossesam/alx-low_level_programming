#include <stdlib.h>
#include "main.h"

char *_strdup(char *str)
{   char *new_str;
    int length;
    int i;
    length = 0;
   //first we get the length of the string
   for(i = 0; str[i] != '\0'; i++){
        length++;
   }
    //check if str is not NULL
    if(str != NULL){
        if(length > 0){
            //allocate the memory with lenngth
            new_str = malloc(sizeof(char) * (length + 1));
            i = 0;
            while (str[i] != '\0')
            {
                //copy the string
                new_str[i] = str[i];
                i++;
            }
            
        }else{
            return NULL;
        }
    }else{
        return NULL;
    }
    
return new_str;
}

