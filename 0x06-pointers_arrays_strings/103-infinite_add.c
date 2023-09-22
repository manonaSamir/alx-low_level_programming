#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two integers stored as strings
 *
 * @n1: first integer string to add
 * @n2: second integer string to add
 * @r: array to store resulting string in
 * @size_r: size of array r
 * Return: the summed string in r. If r is too small for the result,
 * return 0;
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1, n2, result, i, carry, sum;

	for (n1 = 0; n1[n1]; n1++)
		;
	for (n2 = 0; n2[n2]; n2++)
		;
	if (n1 > size_r || n2 > size_r)
		return (0);
	carry = 0;
	for (n1 -= 1, n2 -= 1, result = 0; result < size_r - 1; n1--, n2--, result++)
	{
		sum = carry;
		if (n1 >= 0)
			sum += n1[n1] - '0';
		if (n2 >= 0)
			sum += n2[n2] - '0';
		if (n1 < 0 && n2 < 0 && sum == 0)
		{
			break;
		}
		carry = sum / 10;
		r[result] = sum % 10 + '0';
	}
	r[result] = '\0';
	if (n1 >= 0 || n2 >= 0 || carry)
		return (0);
	for (result -= 1, i = 0; i < result; result--, i++)
	{
		carry = r[result];
		r[result] = r[i];
		r[i] = carry;
	}
	return (r);
}
