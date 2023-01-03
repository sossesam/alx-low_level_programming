#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *s3;
    unsigned int length_s1;
    int length_s2;
    int length_s3;
    unsigned int i;
    if(s2 == NULL){
        s2 = malloc(sizeof (char));
        s2 = "";
    }

    for(i = 0; s1[i] != '\0'; i++){
        length_s1 = i + 1;
    }
    for(i = 1; s2[i] != '\0'; i++){
        length_s2 = i;
    }
    length_s3 = length_s1 + n;
    s3 = malloc(sizeof(char) * (length_s3));

    if(s3 == 0){
        return NULL;
    }
    else{
        for(i =0; i <= length_s1; i++){
        s3[i] = s1[i];
    }


    for(i = 0; i <= n; i++){
        s3[length_s1 + i] = s2[i];
    }
    }
    

    return s3;



    


}
