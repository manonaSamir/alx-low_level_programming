#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of
 * the number 612852475143
 * Return:  0
 */

int main(void)
{
unsigned long int n = 612852475143;
long result = 0;
int i;
while (n % 2 == 0)
{
printf("%d ", 2);
n = n / 2;
}
for (i = 3; i <= sqrt(n); i = i + 2)
{
while (n % i == 0)
{
n = n / i;
}
}
if (n > 2)
{
result = n;
printf("%ld", result);
putchar('\n');
}
return (0);
}
