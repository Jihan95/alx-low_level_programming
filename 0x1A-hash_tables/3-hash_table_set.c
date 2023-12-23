#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: value is the value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item, *current_item;
	unsigned long int index;

	if (ht == NULL)
		return (0);
	item = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (item == NULL || key == NULL)
		return (0);
	item->key = strdup(key);
	if (item->key == NULL)
	{
		free(item);
		return (0); }
	item->value = strdup(value);
	if (item->value == NULL)
	{
		free(item);
		free(item->key);
		return (0); }
	item->next = NULL;
	index = key_index((const unsigned char *)key, ht->size);
	current_item = ht->array[index];
	if (current_item == NULL)
	{
		ht->array[index] = item;
		return (1); }
	if (strcmp(current_item->key, key) == 0)
	{
		if (current_item->value != NULL)
			free(current_item->value);
		current_item->value = strdup(value);
		if (current_item->value == NULL)
			return (0);
		free(item->key);
		free(item->value);
		free(item);
		return (1); }
	item->next = current_item;
	ht->array[index] = item;
	return (1);
}
