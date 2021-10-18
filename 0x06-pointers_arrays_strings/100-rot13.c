#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: pointer to source string
 * Return: pointer to string encoded
 */

char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'A' && s[i] <= 'M') || (s[i] >= 'a' && s[i] <= 'm'))
		{
			s[i] = s[i] + 13;
		}
		else if ((s[i] >= 'N' && s[i] <= 'Z') || (s[i] >= 'n' && s[i] <= 'z'))
		{
			s[i] = s[i] - 13;
		}
	}
	return (s);
}
