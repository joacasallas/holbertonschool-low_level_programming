#include "main.h"

int _strcmp(char *s1, char *s2);
int _strlen(char *s);
int _atoi(char *s);

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
	int i, j, k, sum1, sum2;
	char *str = needle;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				for (; needle[j] != '\0'; j++)
				{
					k = i;
					str[j] = haystack[k];
					k++;
					sum1 = sum1 + _atoi(needle);
					sum2 = sum2 + _atoi(str);
					if (sum1 == sum2)
					{
						return (haystack + i);
					}
				}
			}
		}
	}
	return ('\0');
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
