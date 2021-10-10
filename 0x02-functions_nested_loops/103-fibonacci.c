#include "main.h"

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long i = 1;
	unsigned long j = 2;
	unsigned long f = 0;
	unsigned long k;

	printf("1, 2, ");
	for (k = 3; (i + j) < 4000000; k++)
	{
		f = i + j;
		i = j;
		j = f;
		if (f > 3000000)
		{
			printf("%ld", f);
		}
		else
		{
			printf("%ld, ", f);
		}
	}
	printf("\n");
	return (0);
}
