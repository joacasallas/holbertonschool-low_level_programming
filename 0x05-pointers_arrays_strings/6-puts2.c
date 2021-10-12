#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 * @str: string with the characters to print
 * Return: Always 0.
 */

int _strlen(char *s);

void puts2(char *str)
{
	int i;
	int j = _strlen(str);

	for (i = 0; i <= j; i += 2)
		{
			_putchar(str[i]);
		}
	_putchar('\n');
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
