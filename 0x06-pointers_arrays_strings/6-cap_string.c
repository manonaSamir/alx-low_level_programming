#include <string.h>
#include <stdio.h>

/**
* cap_string - This function capitalizes all words of a string.
* @s: sring to be processed.
* Return: pointer to the modified string.
*/


char *cap_string(char *s)
{
char sep[] = { ' ', '\t', '\n', ',', ';', '!',
'.', '?', '\"', '(', ')', '{', '}'};
int diff = 'a' - 'A', i = 0, j, len = strlen(s), sepLen = strlen(sep);
for (; i < len; i++)
{
if (!(s[i] >= 'a' && s[i] <= 'z') && s[i] != '\0')
{
for (j = 0; j <= sepLen; j++)
{
if (sep[j] == s[i])
{
if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
{
s[i + 1] = s[i + 1] - diff;
continue;
}
}
}
}
}
return (s);
}
