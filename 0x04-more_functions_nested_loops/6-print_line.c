#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: the number of times the character _ should be printed
 * Return: 0
 */
void print_line(int n)
{
int i, c;
for (i = 0; i <= n; i++)
{
c = '-' * n;
_putchar(c);
_putchar('\n');
}
}
