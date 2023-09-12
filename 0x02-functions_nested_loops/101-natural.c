#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: Always return 0 (Success)
 */
int main(void)
{
unsigned long int sum = 0, i;
for (i = 0; i < 1024; ++i)
{
if (((i % 3) == 0) || ((i % 5) == 0))
{
sum += i;
}
}
printf("%d\n", sum);
printf("\n");
return (0);
}
