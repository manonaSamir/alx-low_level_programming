#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * palindrome - checks the characters recursively for palindrome
 * @s: string to check
 * @x: iterator
 * @y: result
 *
 * Return: 1 if palindrome, 0 if not
 */

int palindrome(char *s, int x, int y)
{
if (x > y)
{
if (s[y] == s[x])
{
return (palindrome(s, --x, ++y));
}
return (0);
}
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
int len = strlen(s) - 1;
if (*s == 1)
return (1);
return (palindrome(s, len, 0));
}
