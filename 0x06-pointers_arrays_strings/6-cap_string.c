#include "main.h"

int _strlen(char *src);

/**
 * cap_string -  capitalize all words of a string.
 * @n: pointer to string to capitalize
 * Return: pointer to string capitalized
 */

char *cap_string(char *n)
{
	int i, j;
	char tokens[] = " \t\n,;.!?\"(){}";

	for (i = 0; i < _strlen(n); i++)
	{
		if (n[i] == ' ')
		{
			if (n[i + 1] > 'a' && n[i + 1] < 'z')
			{
				n[i + 1] = n[i + 1] - 32;
			}
		}
		for (j = 0; j <= 12; j++)
		{
			if (n[i] == tokens[j])
			{
				if (n[i + 1] > 'a' && n[i + 1] < 'z')
				{
					n[i + 1] = n[i + 1] - 32;
				}
			}
		}
	}
	return (n);
}

/**
 * _strlen - returns the length of a string
 * @src: string to check length
 * Return: lenght of a string.
 */

int _strlen(char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	}
	return (i);
}
