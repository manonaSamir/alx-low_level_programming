#include "main.h"
/**
 * print_square -  function that prints a square.
 * @size: the number of times the character _ should be printed
 * Return: 0
 */
void print_square(int size)
{
	int i, j;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
