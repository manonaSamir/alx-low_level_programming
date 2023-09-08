#include <stdio.h>

/**
 * main - variables_if_else_while
 *
 * Description: '102-print_comb5'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int a, b, c, d;
for (a = 0; a < 10; a++)
{
b = 0;
if (a > 0)
{
b = a + 1;
}
for (; b < 9; b++)
{
for (c = 0; c < 10; c++)
{
d = c + 1;
for (; d < 10; d++)
{
putchar('0' + a);
putchar('0' + b);
putchar(' ');
putchar('0' + c);
putchar('0' + d);
if (!(c == 8 && d == 9 && b == 9))
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
