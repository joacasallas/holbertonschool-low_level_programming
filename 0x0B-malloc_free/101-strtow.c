#include "main.h"

/**
 * **strtow - split a string into words
 * @str: pointer string source
 * Return: pointer to an array of strings
 * The last element of the returned array should be NULL
 * Returns NULL if str == NULL or str == ""
 */

char **strtow(char *str)
{
	int i, j = 0, k = 0, l, m;
	char **ptrGrid;

	if (*str == '\0' || str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			for (k = 0; str[i] != ' '; k++, i++)
			{
			}
			k++;/*salto de linea*/
			k++;/*valor nulo*/
			j++;
		}
	}
	j++;
	ptrGrid = malloc(sizeof(char *) * j);
	if (ptrGrid == NULL)
	{
		return (NULL);
	}
	for (l = 0; l <= j; l++)
	{
		for (m = 0; m <= k; m++)
		{
			ptrGrid[m] = malloc(sizeof(char) * k);
			if (ptrGrid[m] == NULL)
			{
				return (NULL);
			}
		}
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			for (k = 0; str[i] != ' '; k++, i++)
			{
				ptrGrid[j][k] = str[k];
			}
			ptrGrid[j][k] = '\n';
			k++;
			ptrGrid[j][k] = '\0';
			j++;
		}
	}
	ptrGrid[j][k] = '\0';
	return (ptrGrid);
}
