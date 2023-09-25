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
unsigned int i, j;
for (i = 0; i < strlen(accept); i++)
{
for (j = 0; j < strlen(s); j++)
{
if (accept[i] == s[j])
{
return (j + 1);
}
}
}
return (0);
}
