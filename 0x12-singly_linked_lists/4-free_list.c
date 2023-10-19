#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_list -  frees a list_t list.
 * @head: pointer to list.
 * Return: the address of the new element, or NULL if it failed
 */

void free_list(list_t *head)
{
	if (!head)
		return;

	free_list(head->next);
	if (head->str)
		free(head->str);
	free(head);
}
