#include <stdio.h>
#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: pointer to first value
 * @src: pointer to second value
 * Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
int i, j = 0;
for (i = strlen(dest - 1) + 1; i <= _strlen(src); i++)
{
dest[i] = src[j];
j++;
}
return (dest);
}
