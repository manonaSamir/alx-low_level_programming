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
unsigned int i, j, m;
char word [];
for (i = 0; haystack[i] != '\0'; i++)
{
if (haystack[i] == needle[i])
{
for (j = i, m = 0; haystack[j] != '\0'; j++, m++)
{
word [m] = haystack[j];
if (needle[j] != '\0')
{
return (word);
}
}
}
}
return (NULL);
}
