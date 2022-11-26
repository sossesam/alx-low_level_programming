#include "main.h"

char *cap_string(char *str)
{
    int i;
    int z;

    i=0;
    
    while(*(str + i) != '\0')
    {   z= i + 1;
        if(*(str + i) == ' '||*(str + i) == ','||*(str + i) == 9||*(str + i) == '\n'||*(str + i) == ';'||*(str + i) == '.'|| *(str + i) == '!'|| *(str + i) == '?'|| *(str + i) == '"'||*(str + i) == ')'|| *(str + i) == '('|| *(str + i) == '{'|| *(str + i) == '}')
        {
            if(*(str + z) >= 'a' && *(str + z) <= 'z')
            {
                *(str + z) = *(str + z) - 32;
            }

        }

        i++;
    }

return (str);
}
