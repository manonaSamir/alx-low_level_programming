#include <string.h>
#include <stdio.h>
#include <ctype.h>


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
if (!(isalpha(m[i]) || isdigit(m[i])))
{
for (j = 0; j <= sepLen; j++)
{
if (sep[j] == m[i])
{
i++;
if(m[i] != '\0')
{
m[i] = m[i] - diff;
continue;
}
}
}
}
}
return (m);
}
