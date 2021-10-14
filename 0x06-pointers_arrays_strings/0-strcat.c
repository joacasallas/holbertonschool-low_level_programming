#include "main.h"

int _strlen(char *src);
char *_strcpy(char *dest, char *src);

/**
 * _strcat - concatenate two strings.
 * @src: string to concatenate to other
 * @dest: string result
 * Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	_strcpy(dest + _strlen(dest), src);
	return (dest);
}

/**
 * _strcpy -  copies the string pointed to by src, including the terminating \0
 * to the buffer pointed to by dest.
 * @dest: string result
 * @src: string origin
 * Return: string pointer dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
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
