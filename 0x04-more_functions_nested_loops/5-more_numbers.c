#include "main.h"

/**
 * print_most_numbers -  function that prints the numbers, from 0 to 9.
 * Return:  0
 */
void print_most_numbers(void)
{
int i, j;
for (i = 0; i <= 10; i++)
{
for (j = 0; j <= 14; j++)
{
_putchar('0' + j);
}
_putchar('\n');
}
}
