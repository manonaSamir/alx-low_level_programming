#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * string_nconcat - fuction that concats two strings but with s2 by n amount.
 * @s1: base sting to concat to. `Null` will return as empty.
 * @s2: string to copy from. 'NULL' will return as empty string.
 * @n: amount of s2 to copy.
 * Return: pointer to allocated memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s3;
unsigned int i = 0, j = 0, len1 = 0, len2 = 0;
if (s1 != NULL)
{
len1 = strlen(s1);
}
if (s2 != NULL)
{
if (n < len1 + strlen(s2))
len2 = n;
}
else
{
len2 = strlen(s2);
}
s3 = malloc(sizeof(char) * (len1 + len2 + 1));
if (s3 == NULL)
return (NULL);
if (s1 || s2)
{
for (i = 0, j = 0; i < (len1 + len2); i++)
{
if (i < len1)
{
s3[i] = s1[i];
}
else
{
s3[i] = s2[j];
j++;
}
}
}
s3[i] = '\0';
return (s3);
}
