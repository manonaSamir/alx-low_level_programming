#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: string to print in reverse.
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
