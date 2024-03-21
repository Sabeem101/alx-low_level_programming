#include "lists.h"

/**
 * dlistint_len - prints the length of a doubly linked list
 * @h: pointer to the first node
 *
 * Return: length of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t L;

	for (L = 0; h != NULL; L++)
		h = h->next;
	return (L);
}
