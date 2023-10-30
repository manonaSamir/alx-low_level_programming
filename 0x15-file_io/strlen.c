#include "main.h"
#include <stdio.h>

/**
 * _strlen - function that returns the length of a string.
 * @s: string to measure.
 *
 * Return: Length of the string as INT.
 */

int _strlen(char *s)
{
if (*s)
return (1 + _strlen((s + 1)));
return (0);
}
