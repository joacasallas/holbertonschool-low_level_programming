#include "lists.h"

/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: pointer to linked list
 * Return: the number of nodes in the list for success
 * otherwise exit the program with status 98
 */

size_t print_listint_safe(const listint_t *head)
{
	unsigned int len = 0;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			printf("%d\n", head->n);
			head = head->next;
			len++;
		}
		printf("%d\n", head->n);
		len++;
		return (len);
	}
	exit(98);
}
