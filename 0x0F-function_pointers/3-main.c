#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int a, b;
int (*ptr2func)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
ptr2func = get_op_func(argv[2]);
if (!ptr2func)
{
printf("Error\n");
exit(99);
}
if (( *argv[2] == '/' ||  *argv[2] == '%') && b == 0)
{
printf("Error\n");
exit(100);
}
printf("%d\n", ptr2func(a, b));
return (0);
}
