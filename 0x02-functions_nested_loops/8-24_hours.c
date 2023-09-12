#include "main.h"

/**
 * print_last_digit - Write a function that prints the last digit of a number.
 * @n: value use to find the absolute value.
 * Return: the value of the last digit
 */

void jack_bauer(void)
{
int i, j;
for(i = 0; i < 24; i++)
{
for (j = 0; j < 60; j++)
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
_putchar(':');
_putchar((j / 10) + '0');
_putchar((j % 10) + '0');
_putchar('\n');
}
}
}
