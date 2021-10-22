#include "main.h"

/**
 * print_diagsums -  prints the sum of the two diagonals of a square matrix
 * @a: pointer to the first character of the matrix
 * @size: matrix size
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int i, j, k, l;
	int *sum1, *sum2;

	while(i == 0 && j == 0)
	{
		*sum1 += a[i][j];
		i++;
		j++;
	}
	while(k == 3 && l == 3)
	{
		*sum2 += a[k][l];
		k--;
		l--;
	}
}
