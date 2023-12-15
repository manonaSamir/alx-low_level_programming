#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: pointer to first value
 * @src: pointer to second value
 *@n: byte of string
 * Return: a pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j = 0;
	int k = _strlen(src);
	for (i = _strlen(dest); j < n && j <= k; i++)
	{
		dest[i] = src[j];
		j++;
	}
	return (dest);
}
