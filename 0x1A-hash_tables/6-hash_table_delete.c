#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: Hash table to delete
 * Return: Nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	if (ht && ht->array)
		free(ht->array);
	if (ht && ht->value)
		free(ht->value);
	if (ht && ht->key)
		free(ht->key);
	if (ht)
		free(ht);
}
