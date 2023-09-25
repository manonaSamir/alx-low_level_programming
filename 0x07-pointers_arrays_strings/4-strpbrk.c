#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: haystack.
 * @accept: needle.
 *
 * Return: pointer to to byte s that matches one of the byes in accept, or NUL
 */


char *_strpbrk(char *s, char *accept)
{
unsigned int i, j, count = 0;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return ((s + i));
}
}
}
return (NULL);
}
