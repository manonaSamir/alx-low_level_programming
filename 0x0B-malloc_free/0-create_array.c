#include <stdlib.h>

/**
 * create_array - creates an array of a spacific size and fill with a char.
 * @size : the Size of the array to make.
 * @c: characture to fill the array with.
 *
 * Return: An array of charactures.
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *x;
if (size <= 0)
return (0);
x = malloc(size);
if (x == 0)
return (0);
for (i = 0; i < size; i++)
{
x[i] = c;
}
return (x);
}
