#include "main.h"
#include <stdio.h>

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: starting
 * @m: target
 *
 * Return: number bits flipped
 */
int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *byte = (unsigned char *)&num;
	if (*byte == 1)
		return (1);
	return (0);
}
