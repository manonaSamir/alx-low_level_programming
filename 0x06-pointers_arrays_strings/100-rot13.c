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
char sep[][52] = {{'A', 'B', 'C', 'D', 'E', 'F', 'G',
'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O',
'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'},
{'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
'A', 'B', 'C', 'D' ,'E', 'F', 'G', 'H', 'I', 'J', 'K',
'L', 'M', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f',
'g', 'h', 'i', 'j', 'k', 'l', 'm'}};
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
