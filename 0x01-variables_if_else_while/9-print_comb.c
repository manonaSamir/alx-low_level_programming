#include <stdio.h>

/**
 * main - variables_if_else_while
 *
 * Description: '9-print_comb.c'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char i;
for (i = 0; i < 10; i++)
{
putchar('0' + i);
if (i != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
