#include <stdio.h>

/**
 * main -  prints all possible different combinations of three digits.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;

	for (i = '0'; i <= '8'; i++)
	{
		for (j = i + 1; j < '9'; j++)
		{
			for (k = j + 1; k <= '9'; k++)
			{
				putchar (i);
				putchar (j);
				putchar (k);
				if (i == '7' && j == '8' && k == '9')
			{
				putchar('\n');
			}
				else
				{
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
