#include "main.h"

/**
 * set_bit - prints the binary representation of a number.
 * @n: number to be converted
 * @index: Starting from 0 of the bit you want to get
 * Return: converted decimal number or 0
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > 64)
		return (-1);

	for (i = 1; index > 0; index--, i *= 2)
		;
	*n += i;
	return (1);
}
