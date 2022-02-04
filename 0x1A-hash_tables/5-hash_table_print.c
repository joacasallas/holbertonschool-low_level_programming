#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: hash table to print
 * if ht is NULL, don’t print anything
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	if (ht == NULL)
	{
		return;
	}
	unsigned long int i;
	int comma = 0;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (comma)
			{
				printf(", ");
			}
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			comma = 1;
		}
	}
	printf("}\n");
}
