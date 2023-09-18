#include "main.h"
#include "2-strlen.c"

/**
 * print_rev -  prints a string, in reverse.
 * @s: pointer to first value
 */

void print_rev(char *s)
{
char temp[10];
int k, j = 0;
int i = strlen(s);
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
