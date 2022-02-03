#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht:  hash table  to add or update the key/value
 * @key: is the key. key can not be an empty string
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int i, index;
	char *copy_value = strdup(value);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL || ht == NULL || key == NULL || copy_value == NULL)
	{
		free(copy_value);
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	i = index;
	while (ht->array[i])
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = copy_value;
			return (1);
		}
		i++;
	}
	new_node->key = strdup(key);
	new_node->value = copy_value;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
