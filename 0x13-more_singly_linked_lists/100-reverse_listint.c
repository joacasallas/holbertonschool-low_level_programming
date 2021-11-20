#include "lists.h"

/**
 * reverse_listint -  function that reverses a linked list.
 * @head: pointer to pointer to linked list
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *before = NULL;

	if (*head != NULL)
	{
		while (*head != NULL)
		{
			next = (*head)->next;
			(*head)->next = before;
			before = *head;
			*head = next;
		}
		*head = before;
		return (*head);
	}
	return (NULL);
}
