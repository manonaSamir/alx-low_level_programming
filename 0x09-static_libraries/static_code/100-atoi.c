#include <stdio.h>
#include "2-strlen.c"

/**
 * _atoi - convert a string to an integer.
 * @s: the string to copy to the destination.
 * Return: a copy of the src.
 */

int _atoi(char *s)
{
int i, minus, boolean, result;
result = boolean = 0;
minus = -1;
for (i = 0; i < _strlen(s); i++)
{
if (s[i] == '-')
minus *= -1;
if (s[i] >= '0' && s[i] <= '9')
{
result *= 10;
result -= (s[i] - '0');
boolean = 1;
}
else if (boolean == 1)
{
break;
}
}
result *= minus;
return (result);
}
