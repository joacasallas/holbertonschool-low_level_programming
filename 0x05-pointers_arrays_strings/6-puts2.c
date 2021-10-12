#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 * @str: string with the characters to print
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
