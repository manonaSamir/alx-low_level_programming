#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - function that returns the value of x
 * raised to the power of y
 * @x: value to be manipulated.
 * @y: manipulator
 *
 * Return: Sum as Int
 */

int _sqrt_recursion(int n)
{
static int i = 0;
if (n < 0)
		return (-1);
if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
i++;
	return (_sqrt_recursion(n));
}
