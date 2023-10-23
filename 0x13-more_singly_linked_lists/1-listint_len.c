#include "lists.h"

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
		temp = temp->next;
	}
	count++;
	return (count);
}
