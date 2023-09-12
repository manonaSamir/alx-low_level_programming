#include "main.h"

/**
 * print_alphabet_x10 - Write a function that prints 10 times.
 *
 *
 *
 */

void print_alphabet_x10(void)
{
char i;
for (i = 0; i <= 10; i++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
}
_putchar('\n');
}
