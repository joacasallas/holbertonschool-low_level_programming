#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: matrix pointer
 * @8: size array
 * Return: Nothing
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (a[i][j] != ',' && a[i][j] != ' ')
			{
				_putchar(a[i][j]);
			}
		}
		_putchar('\n');
	}
}
