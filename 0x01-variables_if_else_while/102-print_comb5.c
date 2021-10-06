#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			if (i < j && i != j)
			{
				putchar ('0' + (i / 10));
				putchar ('0' + (j / 10));
				putchar(' ');
				putchar('0' + (i % 10));
				putchar('0' + (j % 10));
				if (i != 98 || j != 99)
				{
					putchar (',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
