#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: pointer to first value
 * @src: pointer to second value
 *@n: byte of string
 * Return: a pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
int i, j = 0;
int k = strlen(src);
for (i = strlen(dest); j < n && j <= k; i++)
{
dest[i] = src[j];
j++;
}
return (dest);
}
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);
    ptr = _strncat(s1, s2, 1024);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
