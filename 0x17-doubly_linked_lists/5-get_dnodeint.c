#include "lists.h"

/**
 * get_dnodeint_at_index - finds a specific node of a doubly linked list
 * @head: pointer to the head of the list
 * @index: index of the node to retrieve
 *
 * Return: pointer to the node or NULL if failed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c;

	if (head == NULL)
	{
		return (NULL);
	}
	if (index == 0)
	{
		return (head);
	}
	for (c = 0; c < index; c++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
