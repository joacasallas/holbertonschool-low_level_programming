#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: pointer to array
 * @size: size of the array
 * @action: function pointer
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		exit(98);
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
