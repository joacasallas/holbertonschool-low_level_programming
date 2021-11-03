#include "main.h"

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
	if (num1 < 0 || num2 < 0)
	{
		printf("Error\n");
		exit(98);
	}
	if (num1 == 0 || num2 == 0)
	{
		printf("%d\n", 0);
	}
	mul = num1 * num2;
	printf("%ld\n", mul);
	return (0);
}
