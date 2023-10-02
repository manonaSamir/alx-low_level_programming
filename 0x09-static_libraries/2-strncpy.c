
#include "main.h"
#include "2-strlen.c"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
int k = _strlen(src);
for (i = 0; i < n && i < k; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
