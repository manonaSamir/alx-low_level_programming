#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * checkErrors - check Errors
 */
int checkErrors(int c, char *v[])
{
int j, i;
if (c != 3)
{
printf("Error\n");
return (98);
}
for (i = 1; i < c; i++)
{
for (j = 0; v[i][j] != '\0' ; j++)
{
if (!isdigit(v[i][j]))
{
printf("Error\n");
return (98);
}
}
}
return (0);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
int i, len, len1, len2, *result_str;
int digit1, digit2, sum;
checkErrors(argc, argv);
len1 = strlen(argv[1]);
len2 = strlen(argv[2]);
len = len1 + len2 + 1;
result_str = malloc(sizeof(int) * len);
if (!result_str)
return (1);
for (i = 0; i <= len1 + len2; i++)
result_str[i] = 0;
for (len1 = len1 - 1; len1 >= 0; len1--)
{
digit1 = argv[1][len1] - '0';
sum = 0;
for (len2 = strlen(argv[2]) - 1; len2 >= 0; len2--)
{
digit2 = argv[2][len2] - '0';
sum += result_str[len] + (digit1 * digit2);
result_str[len1 + len2 + 1] = sum % 10;
sum /= 10;
}
if (sum > 0)
result_str[len1 + len2 + 1] += sum;
}
putchar('\n');
free(result_str);
return (0);
}
