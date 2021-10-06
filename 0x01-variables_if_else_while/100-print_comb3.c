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

	i = '0';
	j = '1';
	while (i <= '9')
	{
		putchar(i);
		putchar(j);
		if ((i == '8') && (j == '9'))
		{
			putchar('\n');
			i++;
			j++;
		}
		else
		{
			putchar (',');
			putchar(' ');
		}
		if (j < '9')
		{
			j++;
		}
		else
		{
			i++;
			j = i + 1;
		}
	}
	return (0);
}
