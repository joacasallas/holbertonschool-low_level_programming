#include "main.h"

int _strcmp(char *s1, char *s2);
int _strlen(char *s);

/**
 * _strstr -  finds the first occurrence of the substring needle
 * in the string haystack
 * @haystack: pointer to string to be scanned
 * @needle: pointer to substring to be searched
 * Return: pointer to the first occurrence in haystack
 * return a null pointer if the sequence is not present
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i;
	unsigned int len1 = _strlen(haystack);
	unsigned int len2 = _strlen(needle);
	char c;

	if (len2 > len1 || _strlen(needle) == 0 || needle != haystack)
	{
		return ('\0');
	}
	else
	{
		i = 0;
		c = needle[0];
		while (i < len1)
		{
			if (haystack[i] == c)
			{
				if (_strcmp(&haystack[i], needle) == 0)
				{
					return (haystack + i);
				}
			}
			i++;
		}
		return ('\0');
	}
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

	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
