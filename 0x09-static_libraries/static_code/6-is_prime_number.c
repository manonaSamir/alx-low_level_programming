#include "main.h"
#include <stdio.h>

/**
 * prime_number - help fuction function for is_prime_number.
 * @x: Original number to be tested.
 * @y: Original number to test with.
 *
 * Return: 1 if a Prime else 0
 */

int prime_number(int x, int y)
{
if (y <= x / 2)
{
if (x % y == 0)
return (0);
return (prime_number(x, y + 1));
}
return (1);
}

/**
 * is_prime_number - fuction the check if a number is a prime.
 * @n: number to be tested.
 *
 * Return: 1 if a Prime else 0
 */

int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (prime_number(n, 2));
}
