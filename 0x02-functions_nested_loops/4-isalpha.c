#include "main.h"

/**
 * _isalpha - Write a function that checks for alphabetic character.
 * @c: character to test.
 *
 * return 0 if not c
 *
 */

int _isalpha(int c)
{
if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
{
return (1);
}
return (0);
}
