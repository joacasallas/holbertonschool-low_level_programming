#include "main.h"

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
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle [j])
			{
				j++;
			}
			else
			{
				break;
			}
			return (haystack + i);
		}
	}
	return ('\0');
}
