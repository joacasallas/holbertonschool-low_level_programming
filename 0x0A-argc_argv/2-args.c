#include "main.h"

/**
 * main - print all arguments it receives.
 * @argc: count of the arguments
 * @argv: array of pointers to the strings
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc && *argv[i] != '\0'; i++)
	{
		printf("%s\n", argv[i]);
	}
	exit(EXIT_SUCCESS);
}
