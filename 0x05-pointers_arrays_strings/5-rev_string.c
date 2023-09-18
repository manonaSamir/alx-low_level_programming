#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverses a string.
 * @s: pointer to first value
 */

void rev_string(char *s)
{
int k, j = 0;
int temp, i = _strlen(s);
for (; i >= 0; --i)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;

j++;
}
_putchar(s);
}
