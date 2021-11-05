#include "dog.h"

char *_strdup(char *str);

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
	new_dog *namedup;
	new_dog *ownerdup;

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
	new_dog->namedup = _strdup(name);
	new_dog->ownerdup = _strdup(owner);
	return (new_dog);
}

/**
 * _strdup - copy the string given as a parameter in a pointer.
 * @str: pointer string source
 * Return: pointer to the new string copy or NULL if str is null
 */

char *_strdup(char *str)
{
	int i, j;
	char *ptr_malloc;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	ptr_malloc = malloc(sizeof(char) * i + 1);
	if (ptr_malloc == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		ptr_malloc[j] = str[j];
	}
	ptr_malloc[j] = '\0';
	return (ptr_malloc);
}
