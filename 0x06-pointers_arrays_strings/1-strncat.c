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
	int i;

	dest = dest + _strlen(dest);
	for (i = 0; i <= ((_strlen(src) - 1) - (_strlen(src) - n)); i++)
	{
		dest[i] = src[i];
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
