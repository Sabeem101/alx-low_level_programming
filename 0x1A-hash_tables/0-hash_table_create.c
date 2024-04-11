#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of the table
 *
 * Return: pointer to the newly created hash table or NULL if failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hashtbl;
	unsigned long int x = 0;

	new_hashtbl = malloc(sizeof(hash_table_t));
	if (new_hashtbl == NULL)
	{
		return (NULL);
	}
	new_hashtbl->size = size;
	new_hashtbl->array = malloc(sizeof(hash_node_t *) * size);
	if (new_hashtbl->array == NULL)
	{
		free(new_hashtbl);
		return (NULL);
	}
	while (x < size)
	{
		new_hashtbl->array[x] = NULL;
		x++;
	}
	return (new_hashtbl);
}
