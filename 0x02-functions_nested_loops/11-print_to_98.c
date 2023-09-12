#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number
 */

int print_to_98(int n)
{
int i;
if (n == 98)
{
_putchar('0' + 98);
}
else if (n < 98)
{
for (i = n ; i <= 98 ; i++)
{
_putchar('0' + i);
if (i < 98)
{
_putchar(", ");
}
}
}
else if (n > 98)
{
for (i = n ; i >= 98 ; i--)
{
_putchar('0' + i);
if (i > 98)
_putchar(", ");
}
}
_putchar("\n");
}
