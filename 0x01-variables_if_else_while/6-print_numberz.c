#include <stdio.h>

/**
 * main -  prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
		{
			putchar('0' + i);
		}
	putchar('\n');
	return (0);
}
