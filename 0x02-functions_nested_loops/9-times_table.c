#include "main.h"

/**
 * times_table -  prints the 9 times table,
 *
 * Return: nothing.
 */

void times_table(void)
{
	int i, j;
	int k = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k > 9)
			{
				_putchar('0' + k / 10);
				_putchar('0' + k % 10);
			}
			else if (k == 0 && j == 0)
			{
				_putchar('0' + k);
			}
			else
			{
				_putchar(' ');
				_putchar('0' + k);
			}
			if (j == 9)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
