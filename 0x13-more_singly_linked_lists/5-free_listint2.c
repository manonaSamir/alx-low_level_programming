#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to list.
 * Return: number of elements in a list
 */

void free_listint2(listint_t **head)
{
	listint_t *current;
	if (*head)
	{
		while ((*head))
		{
			current = (*head)->next;
			free(*head);
			*head = current;
		}
		*head = NULL;
	}
	return;
}
