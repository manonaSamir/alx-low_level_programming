#include <stdlib.h>
/* #include <stdio.h> */

/**
 * _strdup - function that returns a pointer to a newly allocated string.
 * @str: string to allocate memory for.
 *
 * Return: Pointer to string in memory.
 */
char *_strdup(char *str)
{
int i;
char *s;
if (str == 0)
return (0);
if (str == NULL || str == "")
return (NULL);
for (i = 0; str[i]; i++)
s = malloc(sizeof(char) * (i + 1));
if (s == 0)
return (0);
s[i] = '\0';
while (i--)
{
s[i] = str[i];
}
return (s);
}
