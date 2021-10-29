#include "main.h"

/**
 * malloc_checked -  allocates memory using malloc
 * @b: variable to allocate memory
 * Return: Nothing
 */

void *malloc_checked(unsigned int b)
{
	int *store, large;

	large = strlen(b);
	store = malloc(sizeof(int) * large + 1);
	return(*store);
}
