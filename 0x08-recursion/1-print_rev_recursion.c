#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string follow by a new line. recursively.
 * @s: string in which to print.
 *
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (!*s)
	{
		return;
	}
	putchar(*s);
	_print_rev_recursion((s + 1));
}
