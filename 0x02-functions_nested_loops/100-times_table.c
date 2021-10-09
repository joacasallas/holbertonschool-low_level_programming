#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: times to print
 * Return: nothing
 */

void print_times_table(int n)
{
	int i, j;
	int k = 0;

	if (!(n > 15 || n < 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (k > 9 && k < 100)
				{
					_putchar(' ');
					_putchar('0' + k / 10);
					_putchar('0' + k % 10);
				}
				else if (k > 99)
				{
					_putchar('0' + k / 100);
					_putchar('0' + (k / 10) % 10);
					_putchar('0' + k % 10);
				}
				else if (k == 0 && j == 0)
				{
					_putchar('0' + k);
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + k);
				}
				if (j == n)
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
}
