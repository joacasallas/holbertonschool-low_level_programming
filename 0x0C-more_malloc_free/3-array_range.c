#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: lower value
 * @max: highest value
 * Return: the pointer to the newly created array
 * If min > max, return NULL
 */

int *array_range(int min, int max)
{
	int *ptr_malloc;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	ptr_malloc = malloc(sizeof(int) * (max - min) + 1);
	if (ptr_malloc == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		ptr_malloc[i] = min++;
	}
	return (ptr_malloc);
}
