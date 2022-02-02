#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: size of the array
 * Return: a pointer to the newly created hash table
 * otherwise return NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	if (size == 0)
	{
		return (NULL);
	}
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
	{
		return (NULL);
	}
	ht->size = size;
	for (i = 0; i < size; i++)
	{
		ht->array = NULL;
	}
	return (ht);
}
