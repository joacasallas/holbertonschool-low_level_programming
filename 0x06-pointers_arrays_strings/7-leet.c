#include "main.h"

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

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j <= 4; j++)
		{
			if (n[i] == upp[j] || n[i] == low[j])
			n[i] = num[j];
		}
	}
	return (n);
}
