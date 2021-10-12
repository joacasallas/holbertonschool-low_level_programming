#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to reverse
 * Return: Nothing.
 */

void rev_string(char *s)
{
	int i, last, j, temp;

	for (i = 0; s[i] != '\0'; i++)
	{
		last = i;
	}
	last = i;
	i = 0;
	j = last - 1;
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
