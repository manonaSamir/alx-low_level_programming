#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money
 * @argc: number of arguments.
 * @argv: amount of money given in singles.
 *
 * Return: 0 (sucesss) , 1 (Failure)
 */

int main(int argc, char *argv[])
{
int coins[] = {25, 10, 5, 2, 1};
int num = atoi(argv[1]), i, j = 0;
if (argc < 2)
{
printf("Error\n");
return (1);
}
if (num < 0)
{
printf("0\n");
return (0);
}
for (i = 0; i <= 5 && num > 0; i++)
{
while (num >= coins[i])
{
j++;
num -= coins[i];
}
}
printf("%d\n", j);
return (0);
}
