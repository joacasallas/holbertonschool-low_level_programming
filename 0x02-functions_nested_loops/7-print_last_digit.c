#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number
 * @num: digit to check
 * Return: value of the last digit
 */

int print_last_digit(int num)
{
	num = num % 10;
	if (num < 0)
	{
		num = num * -1;
	}
	_putchar('0' + num);
	return (num);
}
