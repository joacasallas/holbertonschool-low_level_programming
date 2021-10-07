#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number
 * @num: digit to check
 * Return: value of the last digit
 */

int print_last_digit(int num)
{
	int last_digit = 0;

	if (num > 9)
	{
		last_digit = num % 10;
	}
	else
	{
		last_digit = num;
	}
	return (last_digit);
}
