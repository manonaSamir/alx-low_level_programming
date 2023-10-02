#include "main.h"
/**
 * print_number - function that prints an integer.
 * @n: the character to be checked
 * Return: 0
 */
void print_number(int n)
{
unsigned int result = n;
if (n < 0)
{
result = -result;
_putchar('-');
}
if ((result / 10) > 0)
{
print_number(result / 10);
}
_putchar((result % 10) + '0');
}
