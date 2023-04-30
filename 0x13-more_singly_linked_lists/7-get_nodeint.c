#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a linked list
 * @head: pointer to list
 * @index: index of the node
 *
 * Return: pointer to the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head)
	{
		if (x == index)
		{
			return (head);
		}
		x++;
		head = head->next;
	}
	return (NULL);
}
