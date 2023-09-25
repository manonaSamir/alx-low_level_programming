#include "main.h"
#include <stdio.h>

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
int i, j;
for (i = 0; i < strlen(s); i++)
{
for (j = 0; j < strlen(accept); j++)
{
if (s[i] == accept[j])
{
return (i);
}
}
}
return (0);
}
