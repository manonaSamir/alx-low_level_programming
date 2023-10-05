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
char *ptr, *ret;
if (!str)
return (NULL);
ret = malloc(sizeof(str) + 1);
if (!ret)
return (NULL);
ptr = ret;
while (*str)
*ptr++ = *str++;
return (ret);
}
