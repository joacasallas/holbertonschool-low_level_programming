#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 * Return: nothing.
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (i <= (size - j))
				{
				_putchar(' ');
				}
				else if (i > (size - j))
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
