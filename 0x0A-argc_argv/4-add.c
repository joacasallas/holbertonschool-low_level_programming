#include "main.h"

/**
 * main - print the sum of positive numbers.
 * If no number is passed to the program, print 0
 * If one of the number contains symbols, print Error and return 1
 * @argc: count of the arguments
 * @argv: array of pointers to the strings
 * Return: 0 for success otherwise 1
 */

int main(int argc, char *argv[])
{
	int i;
	int sum;

	for (i = 0; i < argc; i++)
	{
		if (*argv[i] < '0' || *argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
