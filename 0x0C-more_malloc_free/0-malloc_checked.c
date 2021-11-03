#include "main.h"

/**
 * *malloc_checked -  allocates memory using malloc
 * @b: size required
 * Return: Pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr_malloc = malloc(b);

	if (ptr_malloc == NULL)
	{
		exit(98);
	}
	return (ptr_malloc);
}
