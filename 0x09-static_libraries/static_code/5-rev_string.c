#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverses a string.
 * @s: pointer to first value
 */

void rev_string(char *s)
{
int b, i = _strlen(s) - 1, j = 0;
for (; i >= j; --i)
{
b = s[j];
s[j] = s[i];
s[i] = b;
j++;
}
}
