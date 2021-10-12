#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to reverse
 * Return: Nothing.
 */

void rev_string(char *s)
{
	int i, last, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		last = i;
	}

	for (j = last; s[j] >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
