#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
int i = n - 1;
for (; i > 0; i--)
{
if (i != 0)
{
printf(", ");
}
printf("%d", a[i]);
}
printf("\n");
}
