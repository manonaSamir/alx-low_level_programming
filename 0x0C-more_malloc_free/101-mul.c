#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
int num1, num2, j, i;
if (argc != 3)
{
printf("Error\n");
return (98);
}
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0' ; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
printf("%d\n", num1 *num2);
return (0);
}
