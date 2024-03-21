#include "lists.h"

/**
 * print_dlistint - prints all nodes of a doubly linked list
 * @h: pointer to the first node
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t c;

	for (c = 0; h != NULL; c++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (c);
}
