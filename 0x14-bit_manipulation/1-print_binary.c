#include "main.h"

void print_binary(int num){
int a;

a = num & 1;
if(num == 0){
_putchar('0');
return;
}
if(num == 1){
_putchar('1');
return;
}
print_binary(num >> 1);
_putchar('0' + a);
return;
}


