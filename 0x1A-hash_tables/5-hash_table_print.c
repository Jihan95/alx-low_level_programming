#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *item;
	unsigned long int i = 0;
	int flag = 1;

	if (ht == NULL)
	{
		printf("{}\n");
		return; }
	printf("{");
	while (i <= ht->size)
	{
		item = ht->array[i];
		while (item != NULL)
		{
			if (flag == 0)
				printf(", ");
			printf("/'%s/': /'%s/'", item->key, item->value);
			item = item->next;
			flag = 0; }
		i++; }
	printf("}\n");
}
