#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: the head of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	head = NULL; }
