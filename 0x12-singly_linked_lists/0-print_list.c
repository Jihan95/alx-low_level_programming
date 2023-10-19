#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: the list address
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *mtemp;
	list_t *temp;

	if (h == NULL)
		return (count);
	mtemp = h;
	temp = (list_t *)mtemp;
	while (temp->next != NULL)
	{
		count++;
		if (temp->str == NULL)
			temp->str = "[0] (nil)";
		printf("[%u] %s\n", temp->len, temp->str);
		temp = temp->next;
	}
	printf("[%u] %s\n", temp->len, temp->str);
	count++;
	return (count);
}
