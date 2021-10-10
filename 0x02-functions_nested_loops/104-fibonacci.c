#include "main.h"

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long i = 1;
	unsigned long j = 2;
	unsigned long f, k;

	printf("1, 2, ");
	for (k = 3; k <= 98; k++)
	{
		f = (i + j);
		i = j;
		j = f;
		if (k > 91)
		{
			if (k == 98)
		{
			printf("%ld%ld", f / 1000, f % 1000);
		}
			else
		{
			printf("%ld%ld, ", f / 1000, f % 1000);
		}
		}
		else
		{
			printf("%ld, ", f);
		}
	}
	printf("\n");
	return (0);
}
