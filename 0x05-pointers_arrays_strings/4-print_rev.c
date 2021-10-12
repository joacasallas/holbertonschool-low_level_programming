#include "main.h"

/**
 * print_rev - prints a string, in reverse,
 * @s: string to print
 * Return: Nothing
 */

void print_rev(char *s)
{
	int i, last, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		last = i;
	}

	for (j = last; s[j] >= 1; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
