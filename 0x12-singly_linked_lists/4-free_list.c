#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: pointer to list_t
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
