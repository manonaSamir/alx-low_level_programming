#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - variables_if_else_while
 *
 * Description: '0-positive_or_negative'
 *
 * Return: Always 0 (Success)
 */
int positive_or_negative(int n)
{
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}
return (0);
}
