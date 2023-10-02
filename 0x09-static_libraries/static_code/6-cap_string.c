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
int diff = 'a' - 'A', i, j, sepLen = strlen(sep);
for (i = 0; m[i] != '\0'; i++)
{
if (i == 0 && m[i] >= 'a' && m[i] <= 'z')
m[i] -= diff;
for (j = 0; j < sepLen; j++)
{
if (m[i] == sep[j])
{
if (m[i + 1] >= 'a' && m[i + 1] <= 'z')
{
m[i + 1] -= diff;
}
}
}
}
return (m);
}
