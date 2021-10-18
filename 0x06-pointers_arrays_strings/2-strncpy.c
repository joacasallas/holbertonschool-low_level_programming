#include "main.h"

int _strlen(char *s);

/**
 * _strncpy -  copy n characters from src at the beginning of dest
 * @dest: pointer to the destination array where the content is to be copied
 * @src: This is the string to be copied.
 * @n: The number of characters to be copied from source
 * Return: pointer to the final copy of the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, m;

	m = _strlen(src) - n;
	for (i = (_strlen(src) - 1); i < m; i++)
	{
		src[i] = 0;
	}
	for (i = 0; i < n && i < _strlen(dest); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

/**
 * _strlen - returns the length of a string
 * @s: string to check length
 * Return: lenght of a string.
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}
