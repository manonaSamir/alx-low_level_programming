#include "main.h"
/**
 * print_triangle - function that prints a triangle.
 * @size: the number of times the character _ should be printed
 * Return: 0
 */
void main(int size)
{
size = 10;
int i, j, k;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < size; i++)
{
for (j = i + 1; j <= size; j++)
{
_putchar(' ');
}
for (k = 0; k <= i; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
