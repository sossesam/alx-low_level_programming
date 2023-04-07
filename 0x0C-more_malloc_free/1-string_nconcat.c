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
unsigned int a, b, c, d;

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
;

for (b = 1; s2[b] != '\0'; b++)
;

if (n > b)
s3 = malloc((a + b + 1) * sizeof(char));
else
s3 = malloc((a + n + 1) * sizeof(char));
if (s3 == NULL)
return (NULL);

for (c = 0; c < a; c++)
s3[c] = s1[c];

for (d = 0; d < n && d < b ; d++, c++)
{
s3[c] = s2[d];
}

s3[c] = '\0';
return (s3);
free(s1);
free(s2);
free(s3);
}
