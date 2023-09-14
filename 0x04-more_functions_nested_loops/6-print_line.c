#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: the number of times the character _ should be printed
 * Return: 0
 */
int print_line(int n)
{
int i;
for (i = 0; i <= n; i++)
{
_putchar('0' + (i * n));
_putchar('\n');
}
return (0);
}
