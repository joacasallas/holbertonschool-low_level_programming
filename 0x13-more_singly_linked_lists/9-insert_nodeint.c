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
	unsigned int i = 0;
	listint_t *new, *temp = *head, *temp2 = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
	}
	if (idx == 0)
	{
		new->next = *head;
	}
	while (i < idx)
	{
		if (temp->next != NULL)
		{
			temp2 = temp;
			temp = temp->next;
			i++;
		}
		else
		{
			return (NULL);
		}
	}
	new->next = temp;
	temp2->next = new;
	return (new);
}