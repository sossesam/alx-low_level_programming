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
        if(count == 0)
        {
            str[count] = '\0';
        }
    string = malloc(sizeof(char) * count);

    for(i = 0; i <= count; i++)
    {
        string[i] = str[i];
    }
    string[count] = '\0';
   }
    return string;
}
