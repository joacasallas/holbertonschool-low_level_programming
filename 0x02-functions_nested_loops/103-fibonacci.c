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
	unsigned long f, k, sum;

	for (k = 3; k <= 50; k++)
	{
		f = i + j;
		i = j;
		j = f;
		if (f % 2 == 0 && f < 4000000)
		{
			sum += f;
		}
	}
	sum = sum + 2;
	printf("%ld\n", sum);
	return (0);
}
