#include "main.h"
/**
 * print_number - function that prints an integer.
 * @n: the character to be checked
 * Return: 0
 */
void print_number(int n)
{
if (n < 0)
{
n = -n;
_putchar('-');
}
if (n >= 10 && n < 100)
{
_putchar('0' + n / 10);
}
else
{
if (n / 10)
{
print_number(n / 10);
}
}
_putchar((n % 10) + '0');
putchar('\n');
}
