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

		if (k == 98)
		{
			printf("%lu", f);
		}
			else
		{
			printf("%lu, ", f);
		}
	}
	printf("\n");
	return (0);
}
