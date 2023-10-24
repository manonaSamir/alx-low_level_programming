#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to list.
 * @index: is the index of the node, starting at 0
 * Return: number of elements in a list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current;

	if (!head)
		return (NULL);
	current = head;
	for (i = 0; i < index; i++)
	{
		current = current->next;
	}
	return (current);
}
