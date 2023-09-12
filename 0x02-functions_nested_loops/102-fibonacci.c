#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always return 0 (Success)
 */
int main(void)
{
long int i, last = 0;
for (i = 1; i <= 50; i++)
{
if (i + last < 50)
{
printf("%ld", i + last);
if ((i + last) != 49)
{
printf(", ");
}
last = i;
}
}
return (0);
}
