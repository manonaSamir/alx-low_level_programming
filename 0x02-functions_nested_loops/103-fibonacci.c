#include <stdio.h>

/**
 * main - Prints the sum of Even Fibonacci numbers
 * less than 4000000.
 * Return: Nothing!
 */
int main(void)
{
int i;
long j = 1, k = j + 1, sum =0, total=0;
for (i = 0; total < 4000000; i++)
{
total = j + k;
if ((k % 2) == 0)
{
sum += total;
}
j = k;
k = total;
}
printf("%ld\n", sum);
return (0);
}
