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
int i , j;
for (i = 0 ; i < 9 ; i++)
{
j = i + 1;
for (j; j < 10; j++)
{
putchar('0' + i);
putchar('0' + j);
if (i < 8)
{
putchar(',');
putchar(32);
}
}
}
putchar('\n');
return (0);
}
