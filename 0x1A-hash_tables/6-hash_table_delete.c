#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *item, *next;
	unsigned long int i = 0;

	if (ht == NULL)
		return;
	while (i < ht->size)
	{
		item = ht->array[i];
		while (item != NULL)
		{
			next = item->next;
			free(item->key);
			free(item->value);
			free(item);
			item = next;
		}
		i++; }
	free(ht->array);
	free(ht);
}
