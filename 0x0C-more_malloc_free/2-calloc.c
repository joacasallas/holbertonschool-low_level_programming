#include "main.h"

/**
 * *_calloc - allocates memory for an array, using malloc.
 * The memory is set to zero
 * @nmemb: number of elements
 * @size: the size of the array
 * Return: pointer to the memory allocated
 * If nmemb or size is 0, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr_malloc = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr_malloc =malloc(nmemb * size);
	if (ptr_malloc == NULL)
	{
		return (NULL);
	}
	return (ptr_malloc);
}
