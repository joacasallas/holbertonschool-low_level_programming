#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to pointer to linked list
 * Return: returns the head node’s data (n).
 * if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n = (*head)->n;

	if (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	return (n);
}
