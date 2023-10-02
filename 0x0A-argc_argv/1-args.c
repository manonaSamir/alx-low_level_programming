#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: argument count to number the arguments
 * @argv: argument vector
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
printf("%d\n", argc - 1);
(void)argv;
return (0);
}
