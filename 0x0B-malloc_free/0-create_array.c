#include "main.h"

/**
 * create_array -  creates an array of chars
 * @c: The character to create the array
 * @size: the size of the array
 *
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr_malloc;

	if (size == 0)
	{
		return (NULL);
	}

	ptr_malloc = malloc(sizeof(char) * size);
	if (ptr_malloc == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr_malloc[i] = c;
	}
	return (ptr_malloc);
}
