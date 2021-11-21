#include "main.h"

int _pow(int num, int exp);

/**
 * print_binary -  function that prints the binary representation of a number.
 * @n: number to print in binary
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	int exp;
	int number;
	number = n;

	if (n > 0)
	{
		for (exp = 0; _pow(2, exp) <= number; exp++)
		{
		}
		printf("1");
		number = number - _pow(2, exp);
		while (number > 0)
		{
			for (; _pow(2, exp) > number; exp--)
			{
			printf("0");
			}
			printf("1");
			if (number - _pow(2, exp) > 0)
			{
				number = number - _pow(2, exp);
			}
		}
	}
	printf("0");
}

/**
 * _pow - result of number^exp with base 2
 * @num: base
 * @exp: potencia
 * Return: result
 */

int _pow(int num, int exp)
{
	int i;

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
