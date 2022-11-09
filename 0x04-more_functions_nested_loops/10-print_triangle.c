#include "main.h"

void print_triangle(int size)
{
    int x, z;
    for(x = 1; x <= size; x++)
    {

            int space, hash;
            space = size - x;
            hash = x;
            for(z = 0; z < space; z++)
            {
                _putchar(' ');
            }
            for(z = 0; z < hash; z++){
                _putchar('#');
            }

        
            
             _putchar('\n');
        }
        if(size <= 0){
            _putchar('\n');
        }
       
    
}
