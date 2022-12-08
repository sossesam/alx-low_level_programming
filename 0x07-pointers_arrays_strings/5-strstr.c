#include "main.h"

char *_strstr(char *haystack, char *needle)
{
    int i;
    int count;
    char word[] = "";
    int start;
    int x;
    int q;
    i = 0;

    for(q = 0; *(haystack + q) != '\0'; q++)
    {
        if (*(haystack + q) == *(needle + 0))
        {
            start = q;
            break;
        }
    }

    while(*(needle + i) != '\0')
    {
        
        count = 0;

        while(*(haystack + count) == *(needle + i))
        {
            word[count] = *(haystack + count);
            count += 1;
        }
        i += 1;
    }

    x = 0;

    while(word[x] == *(needle + x))
    {
        return (haystack + start);
        start += 1;
    }
    return (haystack + start);
}
