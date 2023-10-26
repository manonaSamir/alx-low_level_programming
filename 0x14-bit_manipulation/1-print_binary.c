#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to be converted
 * Return: converted decimal number or 0
 */

void print_binary(unsigned long int n)
{
	int i, j;
	char binary[64];

	if (n == 0)
	{
		putchar('0');
		return;
	}
	for (i = 1; n != 0; i++)
	{
		binary[i] = (n % 2) + '0';
		n /= 2;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(binary[j]);
	}
}
