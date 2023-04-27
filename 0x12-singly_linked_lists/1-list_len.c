#include "lists.h"

/**
 * list_len - calculates the number of elements in a linked list
 * @h: pointer to list_t
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t element = 0;

	while (h != NULL)
	{
		h = h->next;
		element++;
	}
	return (element);
}
