#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints a chestboard out and it's pieaces from a matrix;
 * @a: matrix of the board and pieces current location.
 *
 * Return: Nothing
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}
