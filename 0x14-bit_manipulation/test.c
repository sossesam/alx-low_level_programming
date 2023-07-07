#include <stdio.h>
#include "main.h"
int set_bit(unsigned long int *n, unsigned int index)
{unsigned long int check, temp;

temp = 1;
   check = get_bit(*n, index);
   if(!check){
    temp = temp << index;
   }
   *n = *n + temp;
return (*n);
}



int main(){
unsigned long int n, res;

    n = 98;
     set_bit(&n, 0);
    printf("%lu",n);

return (0);
}
