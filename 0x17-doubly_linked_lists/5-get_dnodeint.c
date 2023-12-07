#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node of a dlistint_t linked list.
 * @head: the head of the list
 * @index: the index of the node, starting from 0
 *
 * Return: the nth node of a listint_t linked list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i;
	size_t len = dlistint_len(head);

	if (head == NULL)
		return (NULL);
	if ((size_t)index >= len)
		return (NULL);
	for (i = 0; i < index; i++)
		temp = temp->next;
	return (temp);
}

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
