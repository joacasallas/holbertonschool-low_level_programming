#include "main.h"

void print_number(int n);

/**
 * main -  multiplies two positive numbers and print de result.
 * @argc: count of arguments
 * @argv: pointer to array of arguments
 * Return: 0 for success oherwise 1.
 * If the program does not receive two arguments, print Error
 */

int main(int argc, char *argv[])
{
	long int num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;
	if (mul > 4294967296)
	{
		print_number(mul);
		return (0);
	}
	if (num1 < 0 || num2 < 0)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		printf("%ld\n", mul);
	}
	return (0);
}

/**
 * print_number -  print an integer.
 * @n: integer
 * Return: Nothing.
 */

void print_number(int n)
{
	int i;

	if (n < 0)
	{
		_putchar('-');
	}
	for (i = 1000000000; i > 0; i /= 10)
	{
		if (n / i)
		{
			if ((n / i) % 10 < 0)
				_putchar(-(n / i % 10) + '0');
			else
				_putchar((n / i % 10) + '0');
		}
		else if (n / i == 0 && i == 1)
		{
			_putchar(n / i % 10 + '0');
		}
	}
}
