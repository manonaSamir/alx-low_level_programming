#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Write a function that prints the last digit of a number.
 * @n: value use to find the absolute value.
 * Return: the value of the last digit
 */

int main(int n)
{
int a;
if (n < 0)
{
n = -n;
}
a = n % 10;
if (a < 0)
{
a = -a;
}
putchar(a + '0');
return (a);
}
