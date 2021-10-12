#include "main.h"

int _strlen(char *src);


/**
 * print_array - prints n elements of an array of integers
 * @a: array
 * @n: number of elements of the array to be printed
 * Return: Nothing
 */


void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (a[i] == (a[n - 1]))
		{
			printf("%d", a[i]);
		}
		else if (a[i] < a[n])
		{
			printf("%d, ", a[i]);
		}
	}
	printf("\n");
}

/**
 * _strlen - returns the length of a string
 * @src: string to check length
 * Return: lenght of a string.
 */

int _strlen(char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	}
	return (i);
}
