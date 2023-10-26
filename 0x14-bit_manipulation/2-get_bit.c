#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to be converted
 *@index:
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
