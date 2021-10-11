#include "main.h"

/**
 * main -  finds and prints the the largest prime factor
 * of the number 612852475143
 * Return: Always 0.
 */

int main(void)
{
	unsigned long i, j, k, prime, result, finalresult;

	for (i = 2; i <= 612852475143; i++)
	{
		for (j = 2; j <= 612852475143; j++)
		{
			if ((i % j) != 0)
			{
				prime = j;
			}
			while (612852475143 % prime == 0)
			{
				result = prime;
				k = prime;
				finalresult = result * k;
			}
		}
	}
	printf("%lu\n", finalresult);
	return (0);
}
