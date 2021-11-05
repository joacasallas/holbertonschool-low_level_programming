#include "dog.h"

/**
 * free_dog - frees structures
 * @d: structure pointer
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	free(d);
}
