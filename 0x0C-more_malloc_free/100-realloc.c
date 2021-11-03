#include "main.h"

/**
 * *_realloc -  reallocates a memory block using malloc and free
 * @ptr:  pointer to the memory previously allocated
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size:  new size, in bytes of the new memory block
 *
 * Return: Nothing.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr_realloc;

	ptr_realloc = malloc(new_size);
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size > old_size)
	{
		free(ptr);
		return (ptr_realloc);
	}
	if (ptr == NULL)
	{
		free(ptr);
		ptr_realloc = malloc(new_size);
		return (ptr_realloc);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	free(ptr);
	return (ptr_realloc);
}
