#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: the head of the list
 * @index: the index of the node
 *
 * Return: returns the nth node of a listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i;
	size_t len = listint_len(head);

	if (head == NULL)
		return (NULL);
	if ((size_t)index >= len)
		return (NULL);
	for (i = 0; i < index; i++)
		temp = temp->next;
	return (temp);
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
