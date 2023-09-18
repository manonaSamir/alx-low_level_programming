#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverses a string.
 * @s: pointer to first value
 */

void rev_string(char *s)
{
int k, j = 0;
int i = _strlen(s);
char temp[i];
for (k = 0; k <= i; k++)
{
temp[k] = s[k];
}
for (; i >= 0; --i)
{
s[j] = temp[i];
j ++;
}
}
