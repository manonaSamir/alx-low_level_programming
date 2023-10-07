#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_DIGITS 1000

void multiply(char num1[], char num2[], char result[])
{
int len1 = strlen(num1), len2 = strlen(num2);
int i, j, digit1, digit2, carry = 0, temp, index = 0;
int product[MAX_DIGITS] = {0};
for (i = len1 - 1; i >= 0; i--)
{
for (j = len2 - 1; j >= 0; j--)
{
digit1 = num1[i] - '0';
digit2 = num2[j] - '0';
product[i + j + 1] += digit1 * digit2;
}
}
for (i = len1 + len2 - 1; i >= 0; i--)
{
temp = (product[i] + carry);
product[i] = temp % 10;
carry = temp / 10;
}
for (i = 0; i < len1 + len2; i++)
{
if (product[i] != 0 || index > 0)
{
result[index++] = product[i] + '0';
}
}
result[index] = '\0';
}

int main(int argc, char *argv[])
{
int i, j;
char result[MAX_DIGITS];
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
multiply(argv[1], argv[2], result);
printf("Result: %s\n", result);
return (0);
}
