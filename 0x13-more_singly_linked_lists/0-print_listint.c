#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: the head of the list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp = h;

	if (h == NULL)
		return (count);
	while (temp->next != NULL)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	printf("%d\n", temp->n);
	count++;
	return (count);
}
