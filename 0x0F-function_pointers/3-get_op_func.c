#include "3-calc.h"

/**
 * get_op_func - check *s to return function
 * @s: pointer to symbol-operator menu option (struct)
 * Return: pointer to function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 6)
	{
		if (ops[i].op != s)
		{
			i++;
		}
	}
	return (ops[i].f);
}
