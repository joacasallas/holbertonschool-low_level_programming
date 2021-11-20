#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer to pointer to linked list
 * @index: position node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 1;
	listint_t *temp2 = *head, *temp;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = temp2->next;
		free(temp2);
		return (1);
	}
	temp = *head;
	while (temp)
	{
		if (count == index)
		{
			temp2 = temp->next;
			temp->next = temp2->next;
			free(temp2);
			return (1);
		}
		temp = temp->next;
		count++;
	}
	return (-1);
}
