#include "main.h"

/**
 * *_calloc - allocates memory for an array, using malloc.
 * The memory is set to zero
 * @nmemb: number of elements
 * @size: the size of each element
 * Return: pointer to the memory allocated
 * If nmemb or size is 0, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr_malloc;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr_malloc = malloc(nmemb * size);
	if (ptr_malloc == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		ptr_malloc[i] = 0;
	}
	return (ptr_malloc);
}
