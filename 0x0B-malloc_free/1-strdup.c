#include <stdlib.h>
#include "main.h"

char *_strdup(char *str)
{
    char *string;
    int count;
    int i;
    count = 0;
    if(str == NULL)
    {
        string = NULL;
    }
    else {
        while(str[count] != '\0')
    {
        count = count + 1;
    }
        string = malloc(sizeof(char) * (count + 1));
        if(count == 0)
        {
            string[count] = str[count];
        }
    for(i = 0; i <= count; i++)
    {
        string[i] = str[i];
    }
    string[count] = '\0';
   }
    return string;
}
