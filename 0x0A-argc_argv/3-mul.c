#include "main.h"

/**
 * main - multiplies two numbers and print the result.
 * If the program does not receive two arguments, print Error
 * @argc: count of the arguments
 * @argv: array of pointers to the strings
 * Return: 0 for success otherwise 1
 */

int main(int argc, char *argv[])
{
	int result = 1, i;

	for (i = 0; i < argc; i++)
	{
	}
	if (i - 1 == 2)
	{
		for (i = 1; i <= 2; i++)
		{
			result = result * atoi(argv[i]);
		}
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
