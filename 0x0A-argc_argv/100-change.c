#include "main.h"

/**
 * main -  prints the minimum number of coins to make change
 * If the number passed is negative, print 0, followed by a new line
 * @argc: count of the arguments
 * @argv: array of pointers to the strings
 * Return: if the number of arguments is not exactly 1, print Error, return 1
 */

int main(int argc, char *argv[])
{
	int cents = 0, i, count_coins = 0;
	int coins_value[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i <= 4; i++)
	{
		while (cents - coins_value[i] >= 0)
		{
			cents = cents - coins_value[i];
			count_coins = count_coins + 1;
		}
	}
	printf("%d\n", count_coins);
	return (0);
}
