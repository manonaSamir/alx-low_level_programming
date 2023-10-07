#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <gmp.h>

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
mpz_t  num1, num2, result;
mpz_init(num1);
mpz_init(num2);
mpz_init(result);
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
mpz_set_str(argv[1], "123456789012345678901234567890", 10);
mpz_set_str(argv[2], "987654321098765432109876543210", 10);
mpz_mul(result, num1, num2);
char* result_str = mpz_get_str(NULL, 10, result);
printf("Result: %s\n", result_str);
free(result_str);
return (0);
}
