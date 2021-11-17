#include "lists.h"

/**
 * sum_listint - adds all the data (n) of a listint_t linked list.
 * @head: pointer to linked list
 * Return: sum result, if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head->next != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	sum += head->n;
	return (sum);
}
