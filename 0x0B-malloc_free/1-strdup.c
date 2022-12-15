#include <stdlib.h>
#include "main.h"

char *_strdup(char *str)
{
    char *string;
    int count;
    int i;
    count = 0;
    while(str[count] != '\0')
    {
        count = count + 1;
    }
    if(str == NULL)
    {
        return NULL;
    }
    else {
        string = malloc(sizeof(char) * (count + 1));
        if(count < 1)
        {
            return NULL;
        }
    for(i = 0; i <= count; i++)
    {
        string[i] = str[i];
    }
   }
    return string;
}
