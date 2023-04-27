#include "lists.h"
#include <string.h>

/**
 * _str_len - calculates the length of a string
 * @s: string
 *
 * Return: size of string
 */

int _str_len(const char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}

/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer to list_t
 * @str: string
 *
 * Return: pointer to new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	last_node = *head;
	if (str != NULL)
	{
		new_node->str = strdup(str);
		new_node->len = _str_len(str);
	} else
	{
		new_node->str = NULL;
		new_node->len = 0;
	}
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = new_node;

	return (new_node);
}
