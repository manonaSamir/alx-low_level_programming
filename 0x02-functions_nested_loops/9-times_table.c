#include "main.h"

/**
 * jack_bauer - print every minute of the day, starting from 00:00 - 23:59.
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
putchar('0' + div);
}
else
{
// Remove the last digit and recur
if (div/10)
{
putchar(div/10+ '0');
}
// Print the last digit
putchar(div%10 + '0');
}
if(j != 9)
{
_putchar(' ,');
}
}
_putchar('\n');
}
}
