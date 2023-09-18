#include <stdio.h>
#include "2-strlen.c"

/**
 * _strcpy - fuction copies the string pointed
 * @dest: pointer to copy the string to.
 * @src: the string to copy to the destination.
 *
 * Return: a copy of the src.
 */

char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; i < _strlen(src); i++)
{
dest[i] = src[i];
}
return (dest);
}
