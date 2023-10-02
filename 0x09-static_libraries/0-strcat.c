#include "main.h"
#include "2-strlen.c"

/**
 * *_strcat - concatenates two strings
 * @dest: pointer to first value
 * @src: pointer to second value
 * Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
unsigned int i, j = 0;
for (i = _strlen(dest); j <= _strlen(src); i++)
{
dest[i] = src[j];
j++;
}
return (dest);
}
