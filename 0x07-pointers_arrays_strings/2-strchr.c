#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr - that locates a character in a string.
 * @s: string to search for the character in.
 * @c: char to the search for.
 * Return: pointer to char or else NULL.
 */

char *_strchr(char *s, char c)
{
unsigned int i;
for (i = 0; i < strlen(s); i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return (NULL);
}
