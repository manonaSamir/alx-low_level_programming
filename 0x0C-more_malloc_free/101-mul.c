#include <stdio.h>
#include <string.h>

#define MAX_DIGITS 1000

void multiply(char num1[], char num2[], char result[])
{
int len1 = strlen(num1), len2 = strlen(num2), i, j, digit1, digit2, carry = 0, temp, index =0;
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

int main()
{
char num1[] = "123456789012345678901234567890";
char num2[] = "987654321098765432109876543210";
char result[MAX_DIGITS];
multiply(num1, num2, result);
printf("Result: %s\n", result);
return 0;
}
