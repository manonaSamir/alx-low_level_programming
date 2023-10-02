#include "main.h"

/**
 * print_sign - Write a function that prints the sign of a number.
 * @n: character to test.
 *
 * Return: 1 ( greater than zero) -1 (is less than zero) else 0 (zero)
 *
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
