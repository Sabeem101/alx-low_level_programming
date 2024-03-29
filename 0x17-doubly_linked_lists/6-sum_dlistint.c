#include "lists.h"

/**
 * sum_dlistint - sums all the data of a doubly linked list
 * @head: pointer to the head of the list
 *
 * Return: sum or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
