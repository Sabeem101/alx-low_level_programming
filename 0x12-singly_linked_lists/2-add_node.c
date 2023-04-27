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
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to lister
 * @str: string
 *
 * Return: pointer to new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (str != NULL)
	{
		new_node->str = strdup(str);
		new_node->len = _str_len(str);
	} else
	{
		new_node->str = NULL;
		new_node->len = 0;
	}
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
