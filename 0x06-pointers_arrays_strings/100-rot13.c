#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: pointer to source string
 * Return: pointer to string encoded
 */

char *rot13(char *s)
{
	int i, j;
	char *let1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *let2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j != 52; j++)
		{
			if (s[i] == let1[j])
			{
				s[i] = let2[j];
				break;
			}
		}
	}
	return (s);
}
