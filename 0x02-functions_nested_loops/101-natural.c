#include "main.h"

/**
 * main - computes and prints the sum of all the multiples of 3 or 5
 *
 * Return: Always 0.
 */

int main(void)
{
	int i, k;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			k = k + i;
		}
	}
	printf("%d\n", k);
	return (0);
}
