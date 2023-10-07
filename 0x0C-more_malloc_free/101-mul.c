#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdint.h>

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
unsigned long num1, num2, result_str;
int j, i;
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
return (98);
}
}
}
num1 = strtoull(argv[1], NULL, 10);
num2 = strtoull(argv[2], NULL, 10);
result_str = num1 * num2;
printf("Result: %lu\n", result_str);
return (0);
}
