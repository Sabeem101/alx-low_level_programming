#include "lists.h"

/**
 * pop_listint - deletes head node of a linked list
 * @head: head of a list
 *
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	int head_node;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	temp = (*head)->next;
	head_node = (*head)->n;
	free(*head);
	*head = temp;

	return (head_node);
}
