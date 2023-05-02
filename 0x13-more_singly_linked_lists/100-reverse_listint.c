#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: list head
 *
 * Return: pointer to first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre = NULL;
	listint_t *fol = NULL;

	while (*head != NULL)
	{
		fol = (*head)->next;
		(*head)->next = pre;
		pre = *head;
		*head = fol;
	}
	*head = pre;

	return (*head);
}
