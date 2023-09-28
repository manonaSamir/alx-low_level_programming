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

int Set_sqrt_recursion(int n ,int i)
{
if (n < 0)
		return (-1);
if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (Set_sqrt_recursion(n, i + 1));
}

int _sqrt_recursion(int n)
{
if (n < 0)
		return (-1);
return (Set_sqrt_recursion(n, 0));
}
