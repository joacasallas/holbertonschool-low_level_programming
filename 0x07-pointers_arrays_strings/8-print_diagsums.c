#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  prints the sum of the two diagonals of a square matrix
 * @a: pointer to matrix
 * @size: matrix size
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int i, aux1, aux2;
	unsigned int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		aux1 = i + (size * i);
		sum1 += a[aux1];
		aux2 = size * (i + 1) - (i + 1);
		sum2  += a[aux2];
	}
	printf("%d, %d\n", sum1, sum2);
}
