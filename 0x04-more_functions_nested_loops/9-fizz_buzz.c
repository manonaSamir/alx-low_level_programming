
#include <stdio.h>

/**
 * main -  program that prints the numbers from 1 to 100.
 *  Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", i);
}
putchar(' ');
}
return (0);
}
