#include "main.h"
#include <stdio.h>

/**
 * add_digits - Helper function to add two digits and carry.
 *
 * @digit1: First digit to add.
 * @digit2: Second digit to add.
 * @carry: Pointer to carry value.
 * @result: Pointer to store the result digit.
 */
void add_digits(char digit1, char digit2, int *carry, char *result)
{
	int sum = (digit1 - '0') + (digit2 - '0') + *carry;
	*carry = sum / 10;
	*result = (sum % 10) + '0';
}

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
	int carry = 0;
	int index = 0;
	char *s1 = n1, *s2 = n2;
	while (*s1 != '\0')
	{
		s1++;
	}
	while (*s2 != '\0')
	{
		s2++;
	}
	s1--;
	s2--;
	while (s1 >= n1 && s2 >= n2)
	{
		if (index >= size_r)
		{
			return (0);
		}
		add_digits(*s1, *s2, &carry, &r[index]);
		s1--;
		s2--;
		index++;
	}
	while (s1 >= n1)
	{
		if (index >= size_r)
		{
			return (0);
		}
		add_digits(*s1, '0', &carry, &r[index]);
		s1--;
		index++;
	}
	while (s2 >= n2)
	{
		if (index >= size_r)
		{
			return (0);
		}
		add_digits(*s2, '0', &carry, &r[index]);
		s2--;
		index++;
	}

	while (carry > 0)
	{
		if (index >= size_r)
		{
			return (0);
		}
		r[index] = carry % 10 + '0';
		carry /= 10;
		index++;
	}
	r[index] = '\0';
	int start = 0, end = index - 1;
	while (start < end)
	{
		char temp = r[start];
		r[start] = r[end];
		r[end] = temp;
		start++;
		end--;
	}
	return (r);
}
