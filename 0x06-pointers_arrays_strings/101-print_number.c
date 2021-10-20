#include "main.h"

/**
 * print_number -  print an integer.
 * @n: integer
 * Return: Nothing.
 */

void print_number(int n)
{
	int i;

	if (n < 0)
	{
		_putchar('-');
	}
	for (i = 1000000000; i > 0; i /= 10)
	{
		if (n / i)
		{
			if ((n / i) % 10 < 0)
				_putchar(-(n / i % 10) + '0');
			else
				_putchar((n / i % 10) + '0');
		}
		else if (n / i == 0 && i == 1)
		{
			_putchar(n / i % 10 + '0');
		}
	}
}
