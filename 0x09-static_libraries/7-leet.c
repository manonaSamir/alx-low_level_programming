#include "main.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>

/**
 * leet - encodes a string in 1337
 * @m: string to be encoded
 * Return: the resulting string;
 */

char *leet(char *m)
{
int sep[][5] = {{'a', 'e', 'o', 't', 'l'}, {'4', '3', '0', '7', '1'}};
int i, sepLen = strlen(m), j;
for (i = 0; i <= sepLen; i++)
{
for (j = 0; j < 5; j++)
{
if (sep[0][j] == tolower(m[i]))
{
m[i] = sep[1][j];
}
}
}
return (m);
}
