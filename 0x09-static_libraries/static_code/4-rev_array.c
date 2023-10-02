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
int b, i = n - 1, j = 0;
for (; i >= j; i--)
{
b = a[j];
a[j] = a[i];
a[i] = b;
j++;
}
}
