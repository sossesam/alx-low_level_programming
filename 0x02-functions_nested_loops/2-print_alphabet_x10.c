#include "main.h"

void print_alphabet_x10(void)
{
    int printx10;
    char alphabet;
    
  
        printx10 = 0;
        while(printx10 < 10)
        {
            for(alphabet = 'a'; alphabet <= 'z'; alphabet++)
            {
                _putchar(alphabet);
            }
            printx10++;
            _putchar('\n');
        }
        
 
}
