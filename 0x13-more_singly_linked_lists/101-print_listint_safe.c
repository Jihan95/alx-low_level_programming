#include "lists.h"

/**
 * print_listint_safe -  prints a listint_t linked list.
 * @head: the list head
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	if (head == NULL)
		return count;
	while (head)
	{
		count++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (head->next <= head)
			exit(98);
		head = head->next;
	}
	return (count);
}
