#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 * Return: string converted
 */

int _atoi(char *s)
{
	int result = 0;
	int i = 1;

	for (i = 1; ('-' == s[i]) || ('+' == s[i]); i++)
	{
		if (s[i] == '-')
		{
			i = i * -1;
		}
	}
	for (i = 0; (s[i] >= '0') && (s[i] <= '9'); i++)
	{
		result = (result * 10) + (s[i] - '0');
	}
	return (result * i);
}
