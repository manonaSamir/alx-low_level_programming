#include <stdio.h>

/**
 * main - variables_if_else_while
 *
 * Description: '8-print_base16.c'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char i;
for (i = 0; i < 16; i++)
{
if(i < 10)
{
putchar('0' + i);
}
else
{
putchar(87 + i);
}
}
putchar('\n');
return (0);
}
