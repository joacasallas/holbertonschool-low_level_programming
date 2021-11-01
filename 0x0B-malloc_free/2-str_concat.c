#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string pointer
 * @s2: second string pointer
 * Return: pointer to new string s1 + s2 + \0
 * return NULL on  failure
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *ptr_malloc;

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	ptr_malloc = malloc(sizeof(char) * (i + j) + 1);
	for (k = 0; k <= i; k++)
	{
		ptr_malloc[k] = s1[k];
	}
	for (k = i; k < (i + j); k++, s2++)
	{
		ptr_malloc[k] = s2[0];
	}
	ptr_malloc[k] = '\0';
	return (ptr_malloc);
}
