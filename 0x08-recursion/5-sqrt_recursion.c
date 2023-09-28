#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - find the square root of a given number.
 * @n: number to find the square root of.
 *
 * Return: the sqrt as a Int.
 */

/**
 * Set_sqrt_recursion - find the square root of a given number.
 * @n: number to find the square root of.
 * @i:number of loop
 * Return: the sqrt as a Int.
 */


int Set_sqrt_recursion(int n, int i)
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
