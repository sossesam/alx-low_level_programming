#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *s3;
    unsigned int length_s1;
    unsigned int length_s2;
    unsigned int i;
    int count;
    count = 0;
    if(s2 == NULL){
        s2 = malloc(sizeof (char));
        s2 = "";
    }
    if(s1 == NULL){
        s1 = malloc(sizeof (char));
        s1 = "";
    }

    for(i = 0; s1[i] != '\0'; i++){
        length_s1 = i + 1;
    }
    for(i = 1; s2[i] != '\0'; i++){
        length_s2 = i;
    }

    if (n > length_s2)
		s3 = malloc((length_s1 + length_s2 + 1) * sizeof(char));
	else
		s3 = malloc((length_s1 + n + 1) * sizeof(char));

    if(s3 == NULL){
        return NULL;
    }

    
    for(i = 0; i <= length_s1; i++){
        s3[i] = s1[i];
        count = i;
    }

    for(i = 0; i <= n; i++){
        s3[count + i] = s2[i];
    }
    s3[length_s1 + length_s2] = '\0';
    return s3;
}
