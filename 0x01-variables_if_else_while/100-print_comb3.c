#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		for (j = 0; j < 10 && j != i; j++)
		{
			putchar('0' + j);
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
