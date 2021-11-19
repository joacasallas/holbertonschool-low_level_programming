#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at a position
 * @head: pointer to pointer to linked list
 * @idx: index given
 * @n: integer
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head, *temp2;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (i + 1 < idx)
	{
		if (temp->next == NULL)
		{
			return (NULL);
		}
		temp = temp->next;
		i++;
	}
	temp2 = temp->next;
	temp->next = new;
	new->next = temp2;
	return (new);
}
