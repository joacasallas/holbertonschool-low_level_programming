#include "main.h"

/**
 * main - print the number of arguments passed into the program.
 * @argc: count of the arguments
 * @argv: array of pointers to the strings
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc && *argv[i] != '\0'; i++)
	{
	}
	printf("%d\n", i - 1);
	return (0);
}
