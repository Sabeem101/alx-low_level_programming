#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key from the hash table.
 * @ht: hash table to search
 * @key: key to find
 *
 * Return: value associated with the element, or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	hash_node_t *el;

	if (ht == NULL || ht->size == 0 || ht->array == NULL||
		       key == NULL || strlen(key) == 0)
	{
		return (NULL);
	}
	idx = key_index((unsigned char *)key, ht->size);
	el = ht->array[idx];
	while (el != NULL)
	{
		if (strcmp(el->key, key) == 0)
			return (el->value);
		el = el->next;
	}
	return (NULL);
}
