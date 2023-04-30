#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: pointer to list
 * @idx: index to node added
 * @n: node value
 *
 * Return: pointer to new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;

	listint_t *new_node;
	listint_t *H = *head;

	if (idx != 0)
	{
		for (x = 0; x < idx - 1 && H != NULL; x++)
		{
			H = H->next;
		}
	}
	if (idx != 0 && H == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	} else
	{
		new_node->next = H->next;
		H->next = new_node;
	}
	return (new_node);
}
