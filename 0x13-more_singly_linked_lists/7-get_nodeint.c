#include "lists.h"

/**
 * get_nodeint_at_index - check the code
 * @head: pointer to linked list
 * @index: position node to return
 * Return: index node, if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;

	if (head != NULL)
	{
		temp = head;
		while (i < index && temp->next != NULL)
		{
			temp = temp->next;
			i++;
		}
	}
	return (temp);
}
