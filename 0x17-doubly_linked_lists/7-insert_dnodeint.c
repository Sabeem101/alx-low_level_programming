#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given index
 * @h: double pointer to the beginning of the list
 * @idx: index at which to insert the node
 * @n: data for the new node
 *
 * Return: pointer to the new node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *next_node, *curr_node;
	unsigned int x;

	if (h == NULL)
	{
		return (NULL);
	}
	if (idx != 0)
	{
		curr_node = *h;
		for (x = 0; x < idx - 1 && curr_node != NULL; x++)
			curr_node = curr_node->next;
		if (curr_node == NULL)
			return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		next_node = *h;
		*h = new_node;
		new_node->prev = NULL;
	}
	else
	{
		new_node->prev = curr_node;
		next_node = curr_node->next;
		curr_node->next = new_node;
	}
	new_node->next = next_node;
	if (new_node->next != NULL)
		new_node->next->prev = new_node;
	return (new_node);
}
