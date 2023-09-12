#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always return 0 (Success)
 */
int main(void)
{
long int i, last = 0, first = 1, second;
second = first + 1;
for (i = 1; i <= 50; i++)
{
printf("%ld", first);
if (i != 50)
{
printf(", ");
}
else
{
printf("\n");
}
last = first + second;
first = second;
second = last;
}
return (0);
}
