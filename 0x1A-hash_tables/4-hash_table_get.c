#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key we are looking
 * Return: value associated with the element, or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}
	i = key_index((const unsigned char *)key, ht->size);
	if (i >= ht->size)
	{
		return (NULL);
	}

	if (ht->array[i])
	{
		while (strcmp(ht->array[i]->key, key) != 0)
		{
			ht->array[i] = ht->array[i]->next;
		}
		return (ht->array[i]->value);
	}
	return (NULL);
}
