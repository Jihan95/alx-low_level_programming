#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a new node at a given position
 * @head: the head of the list
 * @index: the index of the list where the new node should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *previous, *current;
	size_t len = dlistint_len(*head);
	unsigned int i;

	if ((size_t)index >= len)
		return (-1);
	if (head == NULL || *head == NULL)
		return (-1);
	previous = NULL;
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1); }
	for (i = 0; i < index; i++)
	{
		previous = current;
		current = current->next;
		if (current == NULL)
			return (-1); }
	previous->next = current->next;
	if (current->next != NULL)
		current->next->prev = previous;
	free(current);
	return (1); }

/**
 * dlistint_len - counts the elements of a dlistint_t list.
 * @h: the head of the list
 *
 * Return: the number of the node
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (nodes);
	while (h->next != NULL)
	{
		nodes++;
		h = h->next; }
	nodes++;
	return (nodes); }
