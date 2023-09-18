#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverses a string.
 * @s: pointer to first value
 */

void rev_string(char *s)
{
char c;
int i = _strlen(s) - 1;
c += s[i];
_putchar(c + '0');
_putchar('\n');
}
