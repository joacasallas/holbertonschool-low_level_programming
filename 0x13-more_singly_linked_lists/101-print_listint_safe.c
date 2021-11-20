#include "lists.h"

/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: pointer to linked list
 * Return: the number of nodes in the list for success
 * otherwise exit the program with status 98
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0;
	listint_t *temp;

	if (head != NULL)
	{
		temp = head->next;
		if (temp->next != head)
		{
			while (head->next != NULL)
			{
				printf("%d\n", head->n);
				head = head->next;
				len++;
			}
			printf("%d\n", head->n);
			len++;
			return (len);
		}
		else
		{
			printf("%d\n", head->n);
			printf("%d\n", temp->n);
			len += 2;
		}
	}
	exit(98);
}
