#include "lists.h"

/**
 * free_list - frees a list_t list
 * @list_t: list to be freed
 */

void free_list(list_t *head)
{
	list_t *temp = head, *current = head;

	while (temp->next != NULL)
	{
		free(temp->str);
		free(temp);
		current = current->next;
		temp = current;
	}
	free(temp->str);
	free(temp);
}
