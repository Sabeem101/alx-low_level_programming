#include "hash_tables.h"

/**
 * hash_table_delete - deletes the hash table.
 * @ht: hash table to be deleted
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int pos = 0;
	hash_node_t *el;

	if (ht == NULL || !ht->array || !ht->size)
	{
		return;
	}
	for (; pos < ht->size; pos++)
	{
		while (ht->array[pos])
		{
			el = ht->array[pos]->next;
			free(ht->array[pos]->key);
			free(ht->array[pos]->value);
			free(ht->array[pos]);
			ht->array[pos] = el;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
