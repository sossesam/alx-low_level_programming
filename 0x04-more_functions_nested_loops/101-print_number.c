#include "main.h"

void print_number(int n)
{
    int count;
    int number;
    int number2;
    int a;
    count = 1;
   
    
    
    if(n < 0){
        _putchar('-');
        n = n * (-1);
    }
    number = n;
    while( number >= 10)
    {

        count = count * 10;
        number = number / 10;
       
    }
     number2 = n;
     a = n;
     while(count > 1){
        if(number2 > 0){
        a = number2 / count;
        number2 = number2 - (a * count);
        count = count / 10;
        _putchar('0' + a);

          
        }else{
            _putchar('0' + 0);
            count = count / 10;
        }

     }
     _putchar('0' + number2);

}
