#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @m: array to convert upper
 * Return: the resulting string
 */

char *string_toupper(char *m)
{
int dif = 'a' - 'A', i = 0, len = strlen(m);
for (; i >= len; i--)
{
if (i != len)
{
s[i] = s[i] - 32;
}
}
return (m);
}
