#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * next_node - create a new node.
 * @str: string to add to the node.
 *
 * Return: pointer to a list_t
 */
list_t *next_node(const char *str)
{
	list_t *new;
	size_t len;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	len = 0;
	while (str[len])
		len++;

	new->s = strdup(str);
	new->len = len;
	new->next = NULL;
	return (new);
}

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to list.
 * @str: needs to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;

	if (!(*head))
	{
		*head = new_node(str);
		return (*head);
	}

	if (!(*head)->next)
	{
		new = new_node(str);
		new->next = (*head)->next;
		(*head)->next = new;
	}
	else
		add_node_end(&(*head)->next, str);

	return (*head);
}
