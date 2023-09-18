#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverses a string.
 * @s: pointer to first value
 */

void rev_string(char *s)
{
int i = _strlen(s) - 1;
for (; i >= 0; --i)
{
_putchar(s[i]);
}
_putchar('\n');
}
