#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * @str: string with the characters to print
 * Return: Nothing
 */

int _strlen(char *str);

void puts2(char *str)
{
	int i;

	for (i = 0; i <= _strlen(str) - 1; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

/**
 * _strlen - returns the length of a string
 * @str: string to check length
 * Return: lenght of a string.
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	return (i);
}
