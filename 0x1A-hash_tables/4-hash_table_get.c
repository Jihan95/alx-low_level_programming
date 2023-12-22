#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: pointer to hash table
 * @key: the key you are looking for
 *
 * Return: the value associated with the element, or NULL if not be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *item;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	item = ht->array[index];
	if (item == NULL)
		return (NULL);
	if (strcmp(item->key, key) == 0)
		return (item->value);
	return (NULL);
}
