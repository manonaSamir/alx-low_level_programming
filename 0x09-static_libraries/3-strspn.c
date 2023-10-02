#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn - function  calculates  the  length (in bytes) of the initial
 * segment of s which consists entirely of bytes in accept.
 * @s: string to search in.
 * @accept: bytes in which to search for.
 *
 * Return: the number (U_INT) of bytes matching accept.
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, count = 0, foundBreak = 0;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == ' ')
{
foundBreak = 1;
}
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
count++;
break;
}
}
if (foundBreak > 0)
{
return (count);
}
}
return (count);
}

