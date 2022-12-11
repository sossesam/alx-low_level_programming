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
    int i;
    for(i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    return(0);
}
