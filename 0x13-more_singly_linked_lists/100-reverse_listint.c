#include "lists.h"

/**
 * reverse_listint -  function that reverses a linked list.
 * @head: pointer to pointer to linked list
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *list_to_do, *reversed_list, *temp;

	if (*head == NULL)
	{
		return (NULL);
	}
	list_to_do = (*head)->next;
	reversed_list = *head;
	reversed_list->next = NULL;

	while(list_to_do != NULL)
	{
		temp = list_to_do;
		list_to_do = list_to_do->next;
		temp->next = reversed_list;
		reversed_list = temp;
	}
	return (reversed_list);
}
