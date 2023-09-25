#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring.
 * @haystack: source string to search through.
 * @needle: string to search for.
 *
 * Return: return beginning of located substring or NULL.
 */

char *_strstr(char *haystack, char *needle)
{
unsigned int i, j = 0;
for (i = 0; haystack[i] != '\0'; i++)
{
if (haystack[i] == needle[j])
{
j++;
if (needle[j] != '\0')
{
return ((haystack + i - j + 1));
}
else if (j < 1)
{
return (haystack);
}
}
}
return (NULL);
}
