#include "main.h"

/**
 * *argstostr - concatenates all the arguments
 * @ac: count of arguments
 * @av: pointer to array of arguments
 * Return: Pointer to a new string or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, characters = 0;
	char *ptrNewString;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			characters++;
		}
	}
	ptrNewString = malloc(sizeof(char) * characters + ac);
	if (ptrNewString == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
		{
			ptrNewString[k] = av[i][j];
		}
		ptrNewString[k] = '\n';
		k++;
	}
	ptrNewString[k] = '\0';
	return (ptrNewString);
}
