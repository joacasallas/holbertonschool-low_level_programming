#include "main.h"

int _strlen(char *src);

/**
 * _strncat - concatenates two strings.
 * @src: pointer string 2
 * @dest: pointer string 1 (store)
 * @n: number of characters to concatenate from src
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j = 0;

	for(i = _strlen(dest); _strlensrc[j] != '\0'; i++)
	{
		dest[i] = src[j];
		j++;
	}
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
