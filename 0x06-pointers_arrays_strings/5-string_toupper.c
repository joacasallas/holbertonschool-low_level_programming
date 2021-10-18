#include "main.h"

int _strlen(char *src);

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: pointer to string with letters to change
 * Return: pointer to string with letters changed
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; i < _strlen(s); i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
	}
	return (s);
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
