#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @char: pointer to
 * @format: list of types of elements passed to the function
 * (c: char / i: integer / f: float / s: char *)
 * if the string is NULL, print (nil) instead
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list ptr;
	int i;

	/**
	 * struct op - Struct for printing function
	 * @s: the symbol that specity data type
	 * @f: the print function
	 * Description:
	 */

	typedef struct op{
		char *s;
		int (*f)(va_list);
	}symbol;

	symbol ops[]{
		{"c", putchar},
		{"i", print_number},
		{"f", print_float},
		{"s", puts},
		{"NULL", "NULL"},
	}

	va_start(ptr, format);
	i = 0;
	while (format)
	{
		if (format[i] == '%')
		{
			letter = va_arg(ptr, char *);
			while (i < 6)
		}
	}
}
