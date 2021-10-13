#include "main.h"

/**
 * _strcat - concatenate two strings.
 * @src: string to concatenate to other
 * @dest: string result
 * Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] <= '\0'; src++)
	{
		dest[j] += src[j];
	}
	return (dest);
}
