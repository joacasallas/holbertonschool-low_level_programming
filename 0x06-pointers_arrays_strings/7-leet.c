#include "main.h"

int _strlen(char *src);

/**
 * leet -  encodes a string into 1337 (leet)
 * @n: pointer to string to encode
 * Return: pointer to string encoded
 */

char *leet(char *n)
{
	char *upp = "A,E,O,T,L";
	char *low = "a,e,o,t,l";
	char *num = "4,3,0,7,1";
	int i, j;

	for (i = 0; i < _strlen(n); i++)
	{
		for (j = 0; j <= 4; j++)
		{
			if (n[i] == upp[j] || n[i] == low[j])
			n[i] = num[j];
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
