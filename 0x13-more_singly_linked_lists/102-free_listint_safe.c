#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list.
 * The function sets the head to NULL
 * @h: pointer to linked list
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	int i = 0;

	while ((*h)->next != NULL)
	{
		*h = (*h)->next;
		free(*h);
		i++;
	}
	free(*h);
	i++;
	*h = NULL;
	return (i);
}
