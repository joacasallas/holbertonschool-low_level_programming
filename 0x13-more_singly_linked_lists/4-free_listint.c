#include "lists.h"

/**
 * free_listint -  function that frees a listint_t list.
 * @head: pointer to listint_t
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			temp = head->next;
			free(head);
			head = temp;
		}
		free(temp);
	}
}
