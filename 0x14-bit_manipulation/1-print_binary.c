#include "main.h"
/**
 * print_binary- number to binary
 * @n: given number
 * Return: its a void
*/

void print_binary(unsigned long int n){
unsigned long int a;

a = n & 1;
if(n == 0){
_putchar('0');
return;
}
if(n == 1){
_putchar('1');
return;
}
print_binary(n >> 1);
_putchar('0' + a);
return;
}


