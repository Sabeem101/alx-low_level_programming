#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a specific index
 * @head: double pointer to the list
 * @index: index at which to delete node
 *
 * Return: 1 on success, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr_node;
	unsigned int c;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	curr_node = *head;
	if (index == 0)
	{
		*head = curr_node->next;
		if (curr_node->next != NULL)
		{
			curr_node->next->prev = NULL;
		}
		free(curr_node);
		return (1);
	}
	for (c = 0; c < index; c++)
	{
		if (curr_node->next == NULL)
			return (-1);
		curr_node = curr_node->next;
	}
	curr_node->prev->next = curr_node->next;
	if (curr_node->next != NULL)
		curr_node->next->prev = curr_node->prev;
	free(curr_node);
	return (1);
}
