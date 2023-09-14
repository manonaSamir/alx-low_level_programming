#include <stdio.h>

/**
 * primeFactors - finds and prints the largest prime factor of
 * the number 612852475143
 * Return:  0
 */

void primeFactors(void)
{
long int n = 612852475143, i;
while (n % 2 == 0)
{
printf("%d ", 2);
n = n / 2;
}
for (i = 3; i <= sqrt(n); i = i + 2)
{
while (n % i == 0)
{
printf("%d ", i);
n = n / i;
}
}
if (n > 2)
printf("%d ", n);
return (0);
}
