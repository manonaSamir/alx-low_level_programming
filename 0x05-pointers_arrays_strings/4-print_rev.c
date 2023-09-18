#include "main.h"
#include "2-strlen.c"

/**
 * print_rev -  prints a string, in reverse.
 * @s: pointer to first value
 */

void print_rev(char *s)
{
int i = _strlen(s) -1;
int i = _strlen(s) - 1;
for (; i >= 0; --i)
{
_putchar(s[i]);
}
_putchar('\n');
}