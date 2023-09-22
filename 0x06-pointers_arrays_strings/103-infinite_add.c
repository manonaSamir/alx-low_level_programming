#include <string.h>
#include <stdlib.h>
#include <stdio.h>

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
int sum = atoi(n1) + atoi(n2);
int length = snprintf(NULL, 0, "%d", sum);
if (length >= size_r)
return (0);
snprintf(r, size_r, "%d", sum);
return (r);
}
