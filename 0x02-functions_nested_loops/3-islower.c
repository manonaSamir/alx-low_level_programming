#include "main.h"

/**
 * _islower - Write a function that checks for lowercase character.
 * @c: character to test.
 *
 * Return: 1 (True) else 0 (False)
 *
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
return (0);
}
