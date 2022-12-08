#include "main.h"

char *_strstr(char *haystack, char *needle)
{
    int i;
    int count;
    int pass ;
    char word[] = "";
    int start;
    int x;
    i = 0;

    while(*(needle + i) != '\0')
    {
        
        count = 0;

        while(*(haystack + count) == *(needle + i))
        {
            if(count == 0)
            {
                start = i;
            }
            word[count] = *(haystack + count);
            count += 1;
        }
        i += 1;
    }
    pass = 0;
    x =0;

    while(word[x] == *(needle + x))
    {
        return (needle + start);
        start += 1;
    }
    return (needle + start);
}
