#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: hash table to be printed
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int pos = 0;
	hash_node_t *el;
	int found = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	while (pos < ht->size)
	{
		el = ht->array[pos];
		while (el != NULL)
		{
			if (found == 1)
				printf(", ");
			printf("'%s': '%s'", el->key, el->value);
			found = 1;
			el = el->next;
		}
		pos++;
	}
	printf("}\n");
}
