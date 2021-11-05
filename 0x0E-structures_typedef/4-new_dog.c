#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: first type data struct
 * @age: second type data struct
 * @owner: third type data struct
 * Return: pointer to struct or NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	if (name == NULL)
	{
		free(new_dog);
		free(owner);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(new_dog);
		free(name);
		return (NULL);
	}
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
