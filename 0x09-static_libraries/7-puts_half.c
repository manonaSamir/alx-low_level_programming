#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - prints half of a string.
 * @str: pointer to first value
 */

void puts_half(char *str)
{
long i;
int len;
if (_strlen(str) % 2 == 0)
{
len = _strlen(str) / 2;
for (i = len; i < _strlen(str); i++)
{
_putchar(str[i]);
}
}
else
{
len = (_strlen(str) - 1) / 2;
for (i = len + 1; i < _strlen(str); i++)
{
_putchar(str[i]);
}
}
_putchar('\n');
}

