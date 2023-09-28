#include "main.h"
#include <stdio.h>

/**
 * palindrome - checks the characters recursively for palindrome
 * @s: string to check
 * @x: iterator
 * @y: result
 *
 * Return: 1 if palindrome, 0 if not
 */

int palindrome(int s, int x, int y)
{
if (x != 0)
{
y = (y * 10) + (x % 10);
x = x / 10;
return (palindrome(s, x, y));
}
if (y == s)
return (1);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */

int is_palindrome(char *s)
{
if (*s == 1)
return (1);
return (palindrome(s, s, 0));
}
