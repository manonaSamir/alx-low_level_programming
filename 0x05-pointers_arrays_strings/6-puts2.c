#include "main.h"
#include "2-strlen.c"
/**
 * puts2 - prints every other character of a string,
 * starting with the first character.
 * @str: pointer to first value
 */

void puts2(char *str)
{
long i;
for (i = 0; str[i] < _strlen(str); i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}

