#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: the head of the list
 * @idx: the index of the list where the new node should be added.
 * @n: the data
 *
 *Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *temp = *head;
	size_t len = listint_len(*head);
	unsigned int i;

	if ((size_t)idx >= len)
		return (NULL);
	newNode = (listint_t *)malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = NULL;
		*head = newNode;
		return (newNode);
	}
	for (i = 0; i < (idx - 1); i++)
		temp = temp->next;
	newNode->next = temp->next;
	temp->next = newNode;
	return (newNode);
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
