#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to user struct
 * if name is NULL, print Name: (nil)
 * If d is NULL print nothing.
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("\n");
	}
	if (d->name == NULL)
	{
		d->name = "nil";
	}
	if (d->owner == NULL)
	{
		d->owner = "nil";
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n",  d->age);
	printf("Owner: %s\n", d->owner);
}
