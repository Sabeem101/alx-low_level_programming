#include "lists.h"

/**
 * listint_len - calculates the number of elements in a linked lists
 * @h: pointer to list
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t element = 0;

	while (h != NULL)
	{
		h = h->next;
		element++;
	}
	return (element);
}
