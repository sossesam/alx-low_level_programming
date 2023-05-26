#include "main.h"
#include <stdio.h>



unsigned int binary_to_uint(const char *b)
{
    unsigned int res;
    res = 0;
    if (*b == '\0')
    return (0);


    while (*b != '\0')
    {
        if(*b != '0' && *b != '1')
        return(0);

        res = (res << 1) +  *b - '0';
        b++;
    }
return (res);

}
