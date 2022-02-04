#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: Hash table to delete
 * Return: Nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	int i = 0;
	hash_node_t *node;

	while (ht->array[i])
	{
		node = ht->array[i];
		free(node->value);
		free(node->key);
		i++;
	}
	free(node);
	free(ht->array);
	free(ht);
}
