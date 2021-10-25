#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion -  returns the length of a string
 * @s: pointer to string
 * Return: length of string.
 */

int _strlen_recursion(char *s)
{
	int i;

	if (s[i] == '\0')
{
	return (0);
}
	else
	{
		return (1 + _starlen_recursion(s + 1))
	}
}
