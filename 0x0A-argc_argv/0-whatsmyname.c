#include "main.h"

/**
 * main - prints the program name
 * @argc: count of the arguments
 * @argv: array of pointers to the strings
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	exit(EXIT_SUCCESS);
}
