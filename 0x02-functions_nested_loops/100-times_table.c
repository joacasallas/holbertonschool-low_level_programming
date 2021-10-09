#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: times to print
 */

void print_times_table(int n)
{
	int i, j, k;

	if (!(n > 15 || n < 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (k < 10 && j != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + k % 10);
				}
				else if (k >= 10 && k < 100)
				{
					_putchar(' ');
					_putchar('0' + k / 10);
					_putchar('0' + k % 10);
				}
				else if (k >= 100 && j != 0)
				{
					_putchar('0' + k / 100);
					_putchar('0' + (k / 100) % 10);
					_putchar('0' + k % 10);
				}
				else
				{
					_putchar('0' + k % 10);
				}
			}
			_putchar('\n');
		}
	}
}
