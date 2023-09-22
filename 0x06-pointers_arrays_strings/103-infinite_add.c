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
int len1 = strlen(n1);
int len2 = strlen(n2);
int lenR = len1 > len2 ? len1 : len2;
if (lenR + 1 > size_r)
{
return (0);
}
int carry = 0;
for (int i = 0; i < lenR; i++)
{
int digit1 = i < len1 ? n1[len1 - 1 - i] - '0' : 0;
int digit2 = i < len2 ? n2[len2 - 1 - i] - '0' : 0;
int sum = digit1 + digit2 + carry;
r[lenR - i] = sum % 10 + '0';
carry = sum / 10;
}
if (carry > 0)
{
if (lenR + 2 > size_r)
{
return (0);
}
memmove(r + 1, r, lenR + 1);
r[0] = carry + '0';
}
return (r);
}
