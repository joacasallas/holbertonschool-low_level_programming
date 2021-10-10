#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: line to draw
 * Return: nothing.
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (i > j)
				{
					_putchar(' ');
				}
				else if (j == i)
				{
					_putchar('\\');
					_putchar('\n');
				}
			}
		}
	}
}
