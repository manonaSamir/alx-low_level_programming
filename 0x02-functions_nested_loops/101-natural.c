#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: Always return 0 (Success)
 */
int main(void)
{
unsigned long int sum, i;
for (i = 0; i < 1024; i++)
{
if ((i % 3) == 0)
{
sum += i;
}
else if ((i % 5) == 0)
{
sum += i;
}
}
printf("%lu\n", sum);
printf("\n");
return (0);
}
