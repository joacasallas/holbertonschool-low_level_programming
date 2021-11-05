#include "dog.h"

/**
 * free_dog - frees structures
 * @d: structure pointer
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
