#include <stdio.h>



int main()
{
   long int number ;
    int primeFactor;
    number = 612852475143;
    primeFactor = 2;

    while( number > 1){
        
        if(number % primeFactor == 0){
           number = number / primeFactor;
        }else{
            primeFactor = primeFactor + 1;
        }
    }

    printf("%d\n", primeFactor);
    

    return (0);
}
