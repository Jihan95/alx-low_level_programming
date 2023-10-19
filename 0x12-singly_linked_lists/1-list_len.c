#include "lists.h"

/**
 * list_len - calculated the number of elements
 * @h: the list address
 *
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *temp = h;

	if (h == NULL)
		return (count);
	while (temp->next != NULL)
	{
		count++;
		temp = temp->next; }
	count++;
	return (count);
}
