#include "main.h"
#include <string.h>
#include <stdio.h>


/**
* cap_string - This function capitalizes all words of a string.
* @m: sring to be processed.
* Return: pointer to the modified string.
*/


char *cap_string(char *m)
{
char sep[] = {' ', '\t', '\n', ',', ';', '!',
'.', '?', '\"', '(', ')', '{', '}'};
int diff = 'a' - 'A', i, j, len = strlen(m), sepLen = strlen(sep);
for (i = 0; i < len; i++)
{
if (!(m[i] >= 'a' && m[i] <= 'z') && m[i] != '\0')
{
for (j = 0; j < sepLen; j++)
{
if (sep[j] == m[i])
{
if (m[i + 1] >= 'a' && m[i + 1] <= 'z' && m[i + 1] != '\0')
{
m[i + 1] = m[i + 1] - diff;
continue;
}
}
}
}
}
return (m);
}
