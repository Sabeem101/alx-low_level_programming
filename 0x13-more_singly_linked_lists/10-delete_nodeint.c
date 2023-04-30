#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: head of list
 * @index: index of list
 *
 * Return: 1 if succeeded, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *pre = *head;
	listint_t *fol;

	if (index != 0)
	{
		for (x = 0; x < index - 1 && pre != NULL; x++)
		{
			pre = pre->next;
		}
	}
	if (pre == NULL || (pre->next == NULL && index != 0))
	{
		return (-1);
	}
	fol = pre->next;

	if (index != 0)
	{
		pre->next = fol->next;
		free(fol);
	} else
	{
		free(pre);
		*head = fol;
	}
	return (1);
}
