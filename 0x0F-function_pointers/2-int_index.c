#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer to the comparing function
 * Return: index of the first element for which
 * the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i = size;
if (array && cmp)
{
while (size--)
{
if (cmp(array[i - size]) != 0)
return (i - size);
}
return (-1);
}
}
