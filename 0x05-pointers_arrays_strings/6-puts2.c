#include "main.h"
/**
 * puts2 - prints every other character of a string,
 * starting with the first character.
 * @str: pointer to first value
 */

void puts2(char *str)
{
long i;
for (i = 0; str[i] != '\0'; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
