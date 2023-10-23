#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a new node at a given position
 * @head: the head of the list
 * @index: the index of the list where the new node should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous, *current;
	size_t len = listint_len(*head);
	unsigned int i;

	if ((size_t)index >= len)
		return (-1);
	if (head == NULL || *head ==NULL)
		return (-1);
	previous = NULL;
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return(1);
	}
	for (i = 1; i < index; i++)
	{
		previous = current;
		current = current->next;
	}
	previous->next = current->next;
	free(current);
	return (1);
}

/**
 * listint_len - counts the elements of a listint_t list.
 * @h: the head of the list
 *
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp = h;

	if (h == NULL)
		return (count);
	while (temp->next != NULL)
	{
		count++;
		temp = temp->next; }
	count++;
	return (count);
}
