#include "main.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>

/**
 * rot13 - encodes a string in rot13
 * @m: string to be encoded
 * Return: the resulting string
 */
char *rot13(char *m)
{
char sep[][52] = {{ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz},
{NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm};
int i, sepLen = strlen(m), j;
for (i = 0; i <= sepLen; i++)
{
for (j = 0; j < 5; j++)
{
if (sep[0][j] == m[i])
{
m[i] = sep[1][j];
}
}
}
return (m);
}
