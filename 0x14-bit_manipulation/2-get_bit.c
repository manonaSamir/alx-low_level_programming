#include "main.h"

/**
 * get_bit - prints the binary representation of a number.
 * @n: number to be converted
 * @index: Starting from 0 of the bit you want to get
 * Return: converted decimal number or 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = ((n >> index) & 1);
	if (index > 64)
		return (-1);
	return (bit);
}
