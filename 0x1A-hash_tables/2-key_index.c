#include "hash_tables.h"

/**
 * key_index - gives the index of a key.
 * @key: key
 * @size: size of the hash table's array
 *
 * Return: index at which the key or value should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx = 0;

	idx = hash_djb2(key);
	return (idx % size);
}
