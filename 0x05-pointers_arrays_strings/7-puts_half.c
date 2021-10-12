#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string pointer
 * Return: Nothing
 */

int _strlen(char *str);

void puts_half(char *str)
{
	int i;

	for (i = (_strlen(str) / 2); i <= (_strlen(str) - 1); i++)
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
