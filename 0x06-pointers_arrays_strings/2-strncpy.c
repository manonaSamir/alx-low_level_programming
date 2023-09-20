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
int i;
int k = strlen(src);
for (i = 0; i <= n && i <= k; i++)
{
dest[i] = src[i];
}
return (dest);
}
