#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: the head of the list
 *
 * Return: the number of the node
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next; }
	printf("%d\n", h->n);
	nodes++;
	return (nodes); }
