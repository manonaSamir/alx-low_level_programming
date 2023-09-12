#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: void
 */

void times_table(void)
{
int i, j, div;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
div = i * j;
if (div < 10)
{
if(div != 0)
{
_putchar(' ');
}
_putchar('0' + div);
}
else
{
if (div / 10)
{
_putchar(div / 10 + '0');
}
_putchar(div % 10 + '0');
}
if (j != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
