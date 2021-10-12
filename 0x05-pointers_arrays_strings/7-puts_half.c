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
	int n = _strlen(str);

	if (n % 2 != 0)
	{
		for (i = ((n - 1) / 2); i <= (n - 1); i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (n / 2); i <= (n - 1); i++)
		{
			_putchar(str[i]);
		}
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
