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
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int j;

	if (j < 6 && ops[0][j] != s)
	{
		j++;
	}
	return (*ops[1][j]);
}
