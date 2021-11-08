#include "variadic_functions.h"

/**
 * print_strings -  prints strings, followed by a new line.
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 * Return:Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *str;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char *);
		if (str)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
