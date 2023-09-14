#include "main.h"

/**
 * print_numbers -   function that prints the numbers, from 0 to 9, followed by a new line.
 * @c: the character to be checked
 * Return:  0
 */
void print_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
_putchar('0' + i);
_putchar('\n');
}
return (0);
}
