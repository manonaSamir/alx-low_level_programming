#include <stdio.h>

/**
 * main - variables_if_else_while
 *
 * Description: '101-print_comb4'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i, j, n;
for (i = 0; i < 8; i++)
{
j = i + 1;
for (; j < 9; j++)
{
n = j + 1;
for (; n < 10; n++)
{
putchar('0' + i);
putchar('0' + j);
putchar('0' + n);
if (i < 7)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
