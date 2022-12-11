#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - print its name
 * @argc: argument count
 * @argv: argument vector for values
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char * argv[])
{
    
    if(argc != 3)
    {
        printf("Error\n");
        return(1);
    }
    else{
        int i;
        int result;
        result = atoi(argv[1]) * atoi(argv[2]);
        printf("%d\n", result);
    }
    return(0);
}
