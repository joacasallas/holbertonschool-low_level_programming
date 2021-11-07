#include "variadic_functions.h"

/**
 * sum_them_all -  returns the sum of all its parameters
 * @n: one of many parameters
 * Return: result of sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ptr_arg;
	int i = 0;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(ptr_arg, n);
	for (i = n; i >= 0; i = va_arg(ptr_arg, int))
	{
		sum = sum + i;
	}
	va_end(ptr_arg);
	return (sum);
}
