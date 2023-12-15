#include "main.h"

/**
 * _strcmp -  compares two strings
 * @s1: @s1: the string to compare
 * @s2: @s1: the string to compare
 * Return: a int value.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	for (; s1[i] == s2[i]; i++)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			return (0);
		}
	}
	return (s1[i] - s2[i]);
}
