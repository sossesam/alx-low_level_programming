#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
    unsigned int i;
    
    unsigned int count;
    count = 0;
    i = 0;
    while(*(s + i) != '\0')
    {
        unsigned int j;
        j = 0;
       
        while(*(accept + j) != '\0')
        {
            
            if(*(s + i) == *(accept + j))
            {
                count += 1;
            }
            j++;
        }
        if(*(s + i) == ' ')
        {
            break;

        }
        i++;
    }
    return count;
}
