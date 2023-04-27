#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

int op_add(int a, int b){
    return (a + b);
}

int op_sub(int a, int b){
    return (a - b);
}

int op_mul(int a, int b){
    return (a * b);
}

int op_div(int a, int b){
    if(a == 0 || b== 0){
    printf("Error\n");
    exit(100);
    }
    return (a / b);
}

int op_mod(int a, int b){
    if(a == 0 || b== 0){
    printf("Error\n");
    exit(100);
    }
    return (a % b);
}
