#include "calc.h"

/**
 * main - prints the result of any mathematic operation
 * @argc: count of the arguments
 * @argv: array of pointers to the strings
 * Return: 0 for success
 */

nt main(int argc, char *argv[])
{
	int result;

	result = (*get_op_func(s))(atoi(a), atoi(b));
	printf("%d", result);
	return (0);
}
