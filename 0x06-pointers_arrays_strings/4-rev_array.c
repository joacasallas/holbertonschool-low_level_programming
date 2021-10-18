#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to reverse
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int i, aux;

	for (i = 0; i < n / 2; i++)
	{
		aux = a[i];
		a[i] = a[n - i - 1];
		a[n - i- 1] = aux;
	}
}
