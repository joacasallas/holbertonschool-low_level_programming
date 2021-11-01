#include "main.h"

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
