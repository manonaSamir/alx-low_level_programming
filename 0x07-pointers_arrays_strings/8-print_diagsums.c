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
int sum0 = 0, sum1 = 0;
int row, col;
for (col = 0, row = 0; row < 8 ; row++, col++)
{
sum0 += *(a + row  * 8 + col);
sum1 += *(a + row  * 8 + (8 - 1 - col));
}
printf("%d, %d\n", sum0, sum1);
}
