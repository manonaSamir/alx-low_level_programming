#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to be converted
 * Return: converted decimal number or 0
 */

void print_binary(unsigned long int n)
{
	int i, size = sizeof(n) * 8;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = 0; i < size; i++)
	{
		if (n == 0)
		{
			_putchar('0');
		}
		else
		{
			_putchar('1');
		}
		n <<= 1;
	}
}
