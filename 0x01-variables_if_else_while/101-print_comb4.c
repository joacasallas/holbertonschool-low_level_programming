#include <stdio.h>

/**
 * main -  prints all possible different combinations of three digits.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9' && j != i; j++)
		{
			for (k = '0';  k <= '9' && k != j && k != i; k++)
			{
				putchar (i);
				putchar (j);
				putchar (k);
				putchar (',');
				putchar (' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}
