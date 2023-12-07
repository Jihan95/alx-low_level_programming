#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: the head of the list
 * @idx: the index of the list where the new node should be added.
 * @n: the data
 *
 *Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *temp = *h;
	size_t len;
	unsigned int i;

	if (h == NULL || *h == NULL)
		return (NULL);
	len = dlistint_len(*h);
	if ((size_t)idx >= len)
		return (NULL);
	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *h;
		newNode->prev = NULL;
		*h = newNode;
		return (newNode);
	}
	for (i = 0; i < (idx - 1); i++)
		temp = temp->next;
	newNode->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = newNode;
	temp->next = newNode;
	newNode->prev = temp;
	return (newNode);
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
