#include "main.h"


int _atoi(char *s)
{
    // int length;
    int space;
    int sign;
    int c;
    int result;

    c = 0;
    space = 0;
    sign = 1;
    result = 0;

    while(*(s + c) != '\0')
    {
        
        if(*(s + c) == ' ')
        {
            space++;
        }
        if(*(s + c) == '-'){
            sign = sign * (-1); 
        }

        if(*(s + c) >= 48 && *(s +c) <= 57)
        {
            result = result * 10 + (*(s + c) - 48);
        }
        c++;
    }
    

return(result * sign);

}
