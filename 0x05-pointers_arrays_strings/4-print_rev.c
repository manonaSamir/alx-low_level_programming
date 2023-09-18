#include "main.h"
#include <stdio.h>
/**
 * print_rev -  prints a string, in reverse.
 * @s: pointer to first value
 */

void print_rev(char *s)
{
int i = strlen(s);
for (; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
