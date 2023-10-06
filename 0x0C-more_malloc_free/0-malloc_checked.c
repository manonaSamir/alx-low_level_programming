#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: string to allocate memory for.
 *
 * Return: Pointer to string in memory.
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
