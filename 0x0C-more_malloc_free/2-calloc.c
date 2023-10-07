#include "main.h"
#include <stdlib.h>

/**
 * _calloc - create and array using calloc
 * @nmemb: number elements.
 * @size: size of the type.
 *
 * Return: pointer to the memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int i;
if (!nmemb || !size)
return (NULL);
ptr = malloc(nmemb * size);
if (!ptr)
return (NULL);
return memset(ptr, 0, nmemb * size);
}
