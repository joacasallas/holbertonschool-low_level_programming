#include "main.h"

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	int i = 1;
	int j = 2;
	unsigned long f;
	int k;

	printf("1, 2, ");
	for (k = 3; k <= 50; k++)
	{
		f = i + j;
		i = j;
		j = f;
		printf("%ld, ", f);
	}
	printf("\n");
	return (0);
}
