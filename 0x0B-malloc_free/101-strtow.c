#include "main.h"

/**
 * **strtow - split a string into words
 * @str: pointer string source
 * Return: pointer to an array of strings
 * Each element of this array should contain a single word
 * The last element of the returned array should be NULL
 * Returns NULL if str == NULL or str == ""
 * If your function fails, it should return NULL
 */

char **strtow(char *str)
{
	char **ptrStrings;
	int i, j;

	if (*str == '\0' || str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	ptrStrings = malloc(sizeof(char *) * i + 1);
	if (ptrStrings == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		ptrStrings[j] = malloc(sizeof(char) * i + 1);
		if (ptrStrings[j] == NULL)
		{
			return (NULL);
		}
	}
	for (i = 0, j = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			i++;
		}
		else if (str[i] != ' ')
		{
			ptrStrings[i][j] = str[i];
			if (str[i + 1] == ' ')
			{
				ptrStrings[i][j] = '\n';
				ptrStrings[i][j] = '\0';
				j++;
			}
		}
	}
	ptrStrings[i][j] = '\0';
	return (ptrStrings);
}
