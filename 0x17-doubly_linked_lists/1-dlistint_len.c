#include "lists.h"

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
