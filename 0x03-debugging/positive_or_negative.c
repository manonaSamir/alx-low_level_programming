#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 * main - variables_if_else_while
 *
 * Description: '0-positive_or_negative'
 *
 * Return: Always 0 (Success)
 */
int positive_or_negative(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
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
