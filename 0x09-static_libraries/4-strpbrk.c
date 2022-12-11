#include "main.h"

char *_strpbrk(char *s, char *accept)
{
    int i;
    for(i = 0; *(s + i) != ' '; i++)
    {
        int count;
        int pass;
        pass = 0;
        count = 0;
        while (*(accept + count) != '\0')
        {
            if (*(accept + count) == *(s + i))
            {
                pass = 1;
                break;
            }
            count += 1;
        }
        if (pass == 1)
            {
                return (s + i);
            }
    }
    return (s + i);
}
