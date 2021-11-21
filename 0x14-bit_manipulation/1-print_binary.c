#include "main.h"

long unsigned int _pow(long unsigned int num, long unsigned int exp);

/**
 * print_binary -  function that prints the binary representation of a number.
 * @n: number to print in binary
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	long unsigned int exp;

	if (n > 0)
	{
		for (exp = 0; _pow(2, exp) <= n; exp++)
		{
			printf("0");
		}
		printf("1");
		n = n - _pow(2, exp);
	}
	printf("0");
}

/**
 * _pow - result of number^exp with base 2
 * @num: base
 * @exp: potencia
 * Return: result
 */

long unsigned int _pow(long unsigned int num, long unsigned int exp)
{
	long unsigned int i;

	if (exp == 0)
	{
		return (1);
	}
	if (exp == 1)
	{
		return (num);
	}
	for (i = 2; i <= exp; i++)
	{
		num = num * 2;
	}
	return (num);
}
