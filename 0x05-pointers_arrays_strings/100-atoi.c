#include "main.h"

int _strlen(char *s);

/**
 * _atoi - convert a string to an integer
 * @s: string origin
 * Return: if there are not numbers: 0, otherwise the numbers
 */

int _atoi(char *s)
{
	int i, j, decimal, number;
	int length = _strlen(s);
	int length2;
	char *s2;


	for (i = 0; i <= length - 1; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			s2 = s[i];
			lenght2 = _strlen(s2);
		}
	}
	for (j = 0; j <= length2 - 1; j++)
	{
		number = (s2[i] - '0');
		for (k = length2 - 1; k >= 0; k--)
			{
				for (decimal = 0; decimal < = 10000000; decimal++)
				{
					k = k * l
				}
			}
		}
		printf("\n");
	}
	return (number);
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
