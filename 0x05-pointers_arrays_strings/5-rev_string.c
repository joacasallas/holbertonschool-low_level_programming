#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to reverse
 * Return: Nothing.
 */

int _strlen(char *s);

void rev_string(char *s)
{
	char aux;
	char *str1 = s;
	char *str2 = s + _strlen(s) - 1;

	while (str1 < str2)
	{
		aux = *str1;
		*str1 = *str2;
		*str2 = aux;
		++str1;
		--str2;
	}
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
