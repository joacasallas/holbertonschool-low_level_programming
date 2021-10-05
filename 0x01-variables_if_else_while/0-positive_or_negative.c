#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -  assign a random number to the variable n each time it is executed
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%i is positive", n);
	}
	else if (n == 0)
					{
						printf("%i is zero", n);
					}
	else
	{
		printf("%i is negative", n);
	}
	printf("\n");
	return (0);
}
