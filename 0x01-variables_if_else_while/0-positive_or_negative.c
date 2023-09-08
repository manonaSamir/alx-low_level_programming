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
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("is positive");
}
else if (n < 0)
{
printf("is negative");
}
else
{
printf("is zero");
}
return (0);
}
