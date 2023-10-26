#include "main.h"
#include <stdio.h>

/**
 * clear_bit - the value of a bit to 0 at a given index.
 * @n: number to be converted
 * @index: Starting from 0 of the bit you want to get
 * Return: converted decimal number or 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int num = index;

	if (index > 64)
		return (-1);
	for (i = 1; num > 0; i *= 2, num--)
		;
	if ((*n >> index) & 1)
		*n -= i;
	return (1);
}
