#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverses a string.
 * @s: pointer to first value
 */

void rev_string(char *s)
{
int temp, i = _strlen(s), j = 0;
for (; i <= j; --i)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
j++;
}
}
