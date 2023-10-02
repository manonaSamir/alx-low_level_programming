#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * infinite_add - adds two integers stored as strings
 *
 * @n1: first integer string to add
 * @n2: second integer string to add
 * @r: array to store resulting string in
 * @size_r: size of array r
 * Return: the summed string in r. If r is too small for the result,
 * return 0;
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int carry = 0, index = 0;
int len1 = strlen(n1);
int len2 = strlen(n2);
int start, end, i, j;
if (len1 > size_r || len2 > size_r)
return (NULL);
for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry > 0; i--, j--)
{
int digit1 = (i >= 0) ? (n1[i] - '0') : 0;
int digit2 = (j >= 0) ? (n2[j] - '0') : 0;
int sum = digit1 + digit2 + carry;
carry = sum / 10;
r[index++] = (sum % 10) + '0';
if (index >= size_r)
return (NULL);
}
r[index] = '\0';
for (start = 0, end = index - 1; start < end; start++, end--)
{
char temp = r[start];
r[start] = r[end];
r[end] = temp;
}
return (r);
}
