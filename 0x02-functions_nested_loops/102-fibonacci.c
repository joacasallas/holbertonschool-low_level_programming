#include "main.h"
#include <stdint.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long i = 1;
	unsigned long j = 2;
	unsigned long f;
	unsigned long k;

	printf("1, 2, ");
	for (k = 3; k <= 50; k++)
	{
		f = i + j;
		i = j;
		j = f;
		if (k == 50)
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
