#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks the endianness.
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
