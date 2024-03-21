#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to the head of the doubly linked list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *n;

	while (head)
	{
		n = head->next;
		free(head);
		head = n;
	}
}
