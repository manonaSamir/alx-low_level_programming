#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list.
 * @head: pointer to list.
 * @index: index where the new node is added
 * Return: number of elements in a list
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	else
	{
		if (!previous || !current)
			return (-1);
		while (index != 0)
		{
			if (!previous || !current)
				return (-1);
			previous = current;
			current = current->next;
			index--;
		}
		previous->next = current->next;
		free(current);
		current = NULL;
	}
	return (1);
}
