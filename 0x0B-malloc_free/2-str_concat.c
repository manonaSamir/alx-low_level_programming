#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
char *s3;
unsigned int i = 0, j = 0, len1, len2;
if (s1 != NULL)
{
len1 = strlen(s1);
}
if (s2 != NULL)
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
