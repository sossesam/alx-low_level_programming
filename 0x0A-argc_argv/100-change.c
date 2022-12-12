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
int main(int argc, char **argv[])
{
    int i;
    int cent;
    int count;
    count = 0;
    i = 0;
    if(argc != 2)
    {
        printf("Error \n");
        return(1);
    }else
    {
        cent = atoi(argv[1]);
            while (cent != 0)
        {
            if(cent >= 25)
            {
                cent = cent - 25;
                count = count + 1;
            }else if(cent >= 10)
            {
                count = count +1;
                cent = cent - 10;
            }
            else if(cent >= 5)
            {
                count = count +1;
                cent = cent - 5;
            }
            else if(cent >= 2)
            {
                count = count +1;
                cent = cent - 2;
            }
            else if(cent >= 1)
            {
                count = count +1;
                cent = cent - 1;
            }else{
                count = count + 0;
            }

       }
        printf("%d\n", count);
        return(0);
 }
 }
