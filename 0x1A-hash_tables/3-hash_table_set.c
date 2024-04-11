#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table
 * @key: key
 * @value: key associated value
 *
 * Return: 1 on success, 0 if failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *n_node, *pos;

	if (strcmp(key, "") == 0 || ht == NULL)
	{
		return (0);
	}
	idx = key_index((unsigned char *)key, ht->size);
	n_node = malloc(sizeof(hash_node_t));
	if (n_node == NULL)
	{
		return (0);
	}
	pos = ht->array[idx];
	if (pos != NULL && strcmp(pos->key, key) == 0)
	{
		free(pos->value);
		free(n_node);
		pos->value = strdup(value);
		return (1);
	}
	n_node->key = strdup(key);
	n_node->value = strdup(value);
	n_node->next = ht->array[idx];
	ht->array[idx] = n_node;
	return (1);
}
