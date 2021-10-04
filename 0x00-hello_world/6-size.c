#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char char_size= "1 byte(s)";
	char int_size= "4 byte(s)";
	char long_int_size= "4 byte(s)";
	char long_long_size= "8 byte(s)";
	char float_size= "4 byte(s)";

	printf("Size of a char: 1 byte(s)\n", char_size);
	printf("Size of an int: 4 byte(s)\n", int_size);
	printf("Size of a long int: 4 byte(s)\n", long_int_size);
	printf("Size of a long long int: 8 byte(s)\n", long_long_size);
	printf("Size of a float: 4 byte(s)\n", float_size);
	return (0);
}
