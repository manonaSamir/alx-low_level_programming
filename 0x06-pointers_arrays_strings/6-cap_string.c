#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @m: array to convert upper
 * Return: the resulting string
 */

char *cap_string(char *m)
{
char sep[] = { ' ', '\t', '\n', ',', ';', '!',
'.', '?', '\"', '(', ')', '{', '}'};
int diff = 'a' - 'A', i = 0, j, len = strlen(m), sepLen = strlen(sep);
for (; i <= len; i++)
{
if (m[i + 1] >= 'a' && m[i + 1] <= 'z')
{
if (!(isalpha(m[i]) || isdigit(m[i])))
{
for (j = 0; j <= sepLen; j++)
{
if (sep[j] == m[i])
{
m[i + 1] = m[i + 1] - diff;
break;
}
}
}
}
else
{
break;
}
}
return (m);
}
