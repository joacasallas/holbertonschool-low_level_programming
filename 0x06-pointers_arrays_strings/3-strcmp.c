#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: First string to be compared
 * @s2: Second string to be compared
 * Return: <0: s1 is less than s2
 * >0: s1 is bigger than s2
 * =0: s1 equal to s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	if (s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
