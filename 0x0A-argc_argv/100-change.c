#include <stdio.h>

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
int num = atoi(argv[1]), i, j;
int coins[5] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
if (num < 0)
{
printf("0\n");
return (0);
}
for (i = 0; i < 5 && num >= 0; i++)
{
for (j = 0; num >= coins[i]; num -= coins[i], j++)
;
}
printf("%d\n", j);
return (0);
}
