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
int a, b;
for (a = 0; a < 99; a++)
{
for (b = a; b <= 99; b++)
{
putchar('0' + a / 10);
putchar('0' + a % 10);
putchar(' ');
putchar('0' + b / 10);
putchar('0' + b % 10);
if (a != 98 || b != 99)
{
putchar(',');
putchar(' ');
}
}
}
return (0);
}
