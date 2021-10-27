#include "main.h"

int _strlen(char *src);

/**
 * _strcat - concatenate two strings.
 * @src: string to concatenate to other
 * @dest: string result
 * Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i, j = 0;

	for (i = _strlen(dest); src[j] != '\0'; i++)
	{
		dest[i] = src[j];
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strlen - returns the length of a string
 * @src: string to check length
 * Return: lenght of a string.
 */

int _strlen(char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	}
	return (i);
}
