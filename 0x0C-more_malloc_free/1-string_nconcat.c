#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: string one being passed
 * @s2: string two being passed
 * @n: size
 * Return: Always 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s3;
unsigned int length_s1;
unsigned int length_s2;
unsigned int a, b, c, d;
int count;

count = 0;
if (s2 == NULL)
{
s2 = malloc(sizeof(char));
s2 = "";
}
if (s1 == NULL)
{
s1 = malloc(sizeof(char));
s1 = "";
}
for (a = 0; s1[a] != '\0'; a++)
length_s1 = a;

for (b = 1; s2[b] != '\0'; b++)
length_s2 = b;

if (n > length_s2)
s3 = malloc((length_s1 + length_s2 + 1) * sizeof(char));
else
s3 = malloc((length_s1 + n + 1) * sizeof(char));
if (s3 == NULL)
return (NULL);

for (c = 0; c <= length_s1; c++)
s3[c] = s1[c];

for (d = 0; d <= n && d <= b ; d++, c++)
{
s3[c] = s2[d];
}

s3[c] = '\0';
return (s3);
}
