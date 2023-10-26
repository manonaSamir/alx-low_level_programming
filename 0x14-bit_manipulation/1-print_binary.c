#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to be converted
 * Return: converted decimal number or 0
 */

void print_binary(unsigned long int n)
{
	int b_num = 0, i;

	for (i = 1; n != 0; i *= 10)
	{
		n /= 2;
		b_num += (n % 2) * i;
	}
	printf("%d", b_num);
}
