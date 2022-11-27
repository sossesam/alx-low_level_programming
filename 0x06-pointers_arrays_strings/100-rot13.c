#include "main.h"

char *rot13(char *str)
{
    char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char rot[]= "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

    int a;
    int b;

    a = 0;
    
    while(*(str + a) != '\0')
    {
         b = 0;
        while( *(alph + b) != '\0')
        {
            if(*(str + a) == *(alph + b))
            {
                *(str + a) = *(rot + b);
                break;
            }
            b++;
        }
        a++;
    }
    return(str);
}
