#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a listint_t linked list
 * @head: the head of the list
 *
 * Return: the sum of all the data (n) of a listint_t linked list.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (sum);
	temp = head;
	while (temp->next != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	sum += temp->n;
		return (sum);
}