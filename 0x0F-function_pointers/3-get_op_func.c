#include "function_pointers.h"

/**
 * get_op_func - check *s to return function
 * @s: pointer to symbol-operator menu option (struct)
 * @a: first integer
 * @b: second integer
 * Return: pointer to function
 */

int (*get_op_func(char *s))(int a, int b)
{
	char *function;
	int i, j;

	for (j = 0; j < 6; j++)
	{
		if (struct[0][j] == s)
			{
				function = &struct[0][j];
			}
	}
	return(function);
}
