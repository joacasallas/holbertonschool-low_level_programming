#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 *
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	unsigned int len = 0;
	const list_t *tmp = h;

	while (tmp != NULL)
	{
		if (tmp->next == NULL)
		{
			printf("%s", tmp->str);
			len++;
		}
		else
		{
			printf("%s", tmp->str);
			len++;
		}
		tmp = tmp->next;
	}
	return (len);
}
