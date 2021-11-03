#include "main.h"

/**
 * *string_nconcat -  concatenates two strings.
 * if NULL is passed, treat it as an empty string
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: number of bytes to copy from second string to the first
 * Return: Pointer with s1 followed but the first n bytes of s2
 * If the function fails, it should return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr_malloc;
	int i;
	unsigned int j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	if (j < n)
	{
		n = j;
	}
	ptr_malloc = malloc(sizeof(char) * i + n + 1);
	if (ptr_malloc == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr_malloc[i] = s1[i];
	}
	for (j = 0; j < n; j++, i++)
	{
		ptr_malloc[i] = s2[j];
	}
	ptr_malloc += '\0';
	return (ptr_malloc);
}
