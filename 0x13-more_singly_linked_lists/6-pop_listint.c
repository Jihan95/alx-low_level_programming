#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: the linked list head
 *
 * Return: the head node's data
 */

int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (*head == NULL)
		return (data);
	temp = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = temp;
	return (data);
}
