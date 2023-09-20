#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * *_strncpy - concatenates two strings
 * @dest: pointer to first value
 * @src: pointer to second value
 *@n: byte of string
 * Return: a pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
int i, j = 0;
for (i = strlen(dest); j < n && j <= strlen(src); i++)
{
dest[i] = src[j];
j++;
}
return (dest);
}
