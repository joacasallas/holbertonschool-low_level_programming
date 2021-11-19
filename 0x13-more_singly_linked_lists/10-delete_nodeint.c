#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer to pointer to linked list
 * @index: position node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = *head, *temp2 = *head;

	if (!*head || !head)
	{
		return (-1);
	}
	if (index > 0)
	{
		while (i < index)
		{
			if (temp->next == NULL)
			{
				return (-1);
			}
			temp2 = temp;
			temp = temp->next;
			i++;
		}
		temp = temp->next;
		temp2->next = temp;
	}
	else
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	return (1);
}
